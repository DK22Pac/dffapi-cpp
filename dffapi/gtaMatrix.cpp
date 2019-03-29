/***************************************************/
/* dffapi 2.0
/* https://github.com/DK22Pac/dffapi
/***************************************************/
#include "gtaMatrix.h"
#include "gtaUtils.h"

gtaMatrix::gtaMatrix() {}

gtaMatrix::gtaMatrix(gtaVector3d const & _right, gtaVector3d const & _up, gtaVector3d const & _at, gtaVector3d const & _pos) {
    set(_right, _up, _at, _pos);
}

void gtaMatrix::set(gtaVector3d const & _right, gtaVector3d const & _up, gtaVector3d const & _at, gtaVector3d const & _pos) {
    right = _right;
    up = _up;
    at = _at;
    pos = _pos;
}

void gtaMatrix::set(gtaMatrix const & matrix) {
    set(matrix.right, matrix.up, matrix.at, matrix.pos);
}

gtaString gtaMatrix::toString() const {
    return gtaUtils::format("%g,%g,%g - %g,%g,%g - %g,%g,%g - %g,%g,%g", right.x, right.y, right.z, up.x, up.y, up.z, at.x, at.y, at.z, pos.x, pos.y, pos.z);
}
