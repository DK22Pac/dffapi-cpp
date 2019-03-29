/***************************************************/
/* dffapi 2.0
/* https://github.com/DK22Pac/dffapi
/***************************************************/
#include "gtaBox.h"
#include "gtaUtils.h"

gtaBox::gtaBox() {}

gtaBox::gtaBox(gtaVector3d const & _min, gtaVector3d const & _max) {
    set(_min, _max);
}

void gtaBox::set(gtaVector3d const & _min, gtaVector3d const & _max) {
    min = _min;
    max = _max;
}

void gtaBox::set(gtaBox const & box) {
    set(box.min, box.max);
}

gtaString gtaBox::toString() const {
    return gtaUtils::format("%g,%g,%g - %g,%g,%g", min.x, min.y, min.z, max.x, max.y, max.z);
}

gtaVector3d gtaBox::center() const {
    return min + ((max - min) / 2);
}

gtaFloat gtaBox::width() const {
    return max.x - min.x;
}

gtaFloat gtaBox::height() const {
    return max.z - min.z;
}

gtaFloat gtaBox::depth() const {
    return max.y - min.y;
}
