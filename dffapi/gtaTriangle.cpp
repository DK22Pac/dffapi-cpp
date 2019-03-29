/***************************************************/
/* dffapi 2.0
/* https://github.com/DK22Pac/dffapi
/***************************************************/
#include "gtaTriangle.h"
#include "gtaUtils.h"

gtaTriangle::gtaTriangle() {}

gtaTriangle::gtaTriangle(gtaUShort _a, gtaUShort _b, gtaUShort _c, gtaUChar _material) {
    set(_a, _b, _c, _material);
}

void gtaTriangle::set(gtaUShort _a, gtaUShort _b, gtaUShort _c, gtaUChar _material) {
    a = _a;
    b = _b;
    c = _c;
    material = _material;
}

void gtaTriangle::set(gtaTriangle const &triangle) {
    set(triangle.a, triangle.b, triangle.c, triangle.material);
}

gtaUShort &gtaTriangle::operator[](gtaUInt index) {
    if (index == 0)
        return a;
    else if (index == 1)
        return b;
    else if (index == 2)
        return c;
    else {
        static gtaUShort null = 0;
        return null;
    }
}

gtaUShort gtaTriangle::operator[](gtaUInt index) const {
    if (index == 0)
        return a;
    else if (index == 1)
        return b;
    else if (index == 2)
        return c;
    else {
        static gtaUShort null = 0;
        return null;
    }
}

gtaString gtaTriangle::toString() const {
    return gtaUtils::format("%u,%u,%u - %u", a, b, c, material);
}

gtaBool gtaTriangle::comparePosition(gtaTriangle const &triangle) const {
    return a == triangle.a && b == triangle.b && c == triangle.c;
}

gtaBool operator==(gtaTriangle const &a, gtaTriangle const &b) {
    return a.a == b.a && a.b == b.b && a.c == b.c && a.material == b.material;
}
gtaBool operator!=(gtaTriangle const &a, gtaTriangle const &b) {
    return a.a != b.a || a.b != b.b || a.c != b.c || a.material != b.material;
}
