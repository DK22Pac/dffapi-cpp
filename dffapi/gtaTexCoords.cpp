/***************************************************/
/* dffapi 2.0
/* https://github.com/DK22Pac/dffapi
/***************************************************/
#include "gtaTexCoords.h"
#include "gtaUtils.h"
#include <math.h>

gtaTexCoords::gtaTexCoords() {}

gtaTexCoords::gtaTexCoords(gtaFloat _u, gtaFloat _v) {
    set(_u, _v);
}

void gtaTexCoords::set(gtaFloat _u, gtaFloat _v) {
    u = _u;
    v = _v;
}

void gtaTexCoords::set(gtaTexCoords const &vec) {
    set(vec.u, vec.v);
}

gtaFloat &gtaTexCoords::operator[](gtaUInt index) {
    if (index == 0)
        return u;
    else if (index == 1)
        return v;
    else {
        static gtaFloat null = 0.0f;
        return null;
    }
}

gtaFloat gtaTexCoords::operator[](gtaUInt index) const {
    if (index == 0)
        return u;
    else if (index == 1)
        return v;
    else {
        static gtaFloat null = 0.0f;
        return null;
    }
}

void gtaTexCoords::normalize() {
    gtaFloat intPart = 0.0f;
    u = std::modf(u, &intPart);
    v = std::modf(v, &intPart);
}

gtaTexCoords gtaTexCoords::normalized() const {
    gtaTexCoords result(*this);
    result.normalize();
    return result;
}

gtaString gtaTexCoords::toString() const {
    return gtaUtils::format("%g,%g", u, v);
}

gtaBool operator==(gtaTexCoords const &a, gtaTexCoords const &b) {
    return a.u == b.u && a.v == b.v;
}

gtaBool operator!=(gtaTexCoords const &a, gtaTexCoords const &b) {
    return a.u != b.u || a.v != b.v;
}
