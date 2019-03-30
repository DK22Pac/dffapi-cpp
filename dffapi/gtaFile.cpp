/***************************************************/
/* dffapi 2.0
/* https://github.com/DK22Pac/dffapi
/***************************************************/
#include "gtaFile.h"
#include "gtaException.h"

void gtaFile::validateFileBounds(gtaUInt range, gtaBool fromCurentPos) {
    if (mFile) {
        auto startPos = fromCurentPos ? ftell(mFile) : 0;
        if ((startPos + range) > mFileSize)
            throw gtaException("reached end of file in " + mFilePath);
    }
}

gtaUInt gtaFile::fileSize() {
    if (mFile)
        return mFileSize;
    return 0;
}

gtaFile::gtaFile(gtaPath const &filepath, Mode mode) {
    mFile = _wfopen(filepath.c_str(), mode == ReadMode ? L"rb" : L"wb");
    if (!mFile)
        throw gtaException("failed to open: " + filepath.string());
    mFilePath = filepath.string();
    if (mode == ReadMode) {
        fseek(mFile, 0, SEEK_END);
        mFileSize = ftell(mFile);
        fseek(mFile, 0, SEEK_SET);
    }
}

gtaFile::~gtaFile() {
    if (mFile)
        fclose(mFile);
}

void gtaFile::writeNull(gtaUInt count) {
    if (mFile) {
        gtaUChar n = 0;
        for (gtaUInt i = 0; i < count; i++)
            fwrite(&n, 1, 1, mFile);
    }
}

void gtaFile::write(void const *data, gtaUInt size) {
    if (mFile) {
        fwrite(data, size, 1, mFile);
    }
}

gtaUInt gtaFile::alignment(gtaUInt size, gtaUInt a) {
    if (a == 0)
        return 0;
    gtaUInt m = size % a;
    return m > 0 ? (a - m) : 0;
}

gtaUInt gtaFile::getAlignedSize(gtaUInt size, gtaUInt a) {
    return size + alignment(size, a);
}

void gtaFile::read(void *dst, gtaUInt size) {
    if (mFile) {
        validateFileBounds(size);
        fread(dst, size, 1, mFile);
    }
}

gtaString gtaFile::readNullTerminated() {
    gtaString result;
    gtaChar c = read<gtaChar>();
    while (c != '\0') {
        result.push_back(c);
        c = read<gtaChar>();
    }
    return result;
}

void gtaFile::skip(gtaUInt bytes) {
    if (mFile) {
        validateFileBounds(bytes);
        fseek(mFile, bytes, SEEK_CUR);
    }
}

void gtaFile::jumpTo(gtaUInt position) {
    if (mFile) {
        validateFileBounds(position, false);
        fseek(mFile, position, SEEK_SET);
    }
}

gtaUInt gtaFile::position() {
    if (mFile)
        return ftell(mFile);
    return 0;
}
