/***************************************************/
/* dffapi 2.0
/* https://github.com/DK22Pac/dffapi
/*
/* File operations
/*
/* TODO: Better error handling
/*
/***************************************************/
#pragma once
#include "gtaTypes.h"

class gtaFile {
private:
    FILE *mFile = nullptr;
    gtaString mFilePath;
    gtaUInt mFileSize = 0;

    void validateFileBounds(gtaUInt range, gtaBool fromCurentPos = true);

    struct ChunkHeader {
        gtaUInt id = 0;
        gtaUInt size = 0;
        gtaUInt version = 0;
        gtaUShort build = 0xFFFF;
    };
public:
    enum Mode { ReadMode, WriteMode };

    gtaUInt fileSize();
    gtaFile(gtaPath const &filepath, Mode mode);
    ~gtaFile();
    void writeNull(gtaUInt count = 1);
    void write(void const *data, gtaUInt size);
    static gtaUInt alignment(gtaUInt size, gtaUInt a);
    static gtaUInt getAlignedSize(gtaUInt size, gtaUInt a);
    void read(void *dst, gtaUInt size);
    gtaString readNullTerminated();
    void skip(gtaUInt bytes);
    void jumpTo(gtaUInt position);
    gtaUInt position();

    template<typename T>
    void write(T const &value) {
        if (mFile)
            fwrite(&value, sizeof(T), 1, mFile);
    }

    template<typename T>
    T read() {
        T result = {};
        if (mFile) {
            validateFileBounds(sizeof(T));
            fread(&result, sizeof(T), 1, mFile);
        }
        return result;
    }

    template<typename T>
    void read(T &out) {
        if (mFile) {
            validateFileBounds(sizeof(T));
            fread(&out, sizeof(T), 1, mFile);
        }
    }
};
