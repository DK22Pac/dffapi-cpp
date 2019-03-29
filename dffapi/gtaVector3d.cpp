/***************************************************/
/* dffapi 2.0
/* https://github.com/DK22Pac/dffapi
/***************************************************/
#include "gtaVector3d.h"
#include "gtaVector2d.h"
#include "gtaUtils.h"
#include <math.h>

gtaVector3d::gtaVector3d() {}

gtaVector3d::gtaVector3d(gtaFloat _x, gtaFloat _y, gtaFloat _z) {
    set(_x, _y, _z);
}

gtaVector3d::gtaVector3d(gtaVector2d const &rhs) {
    set(rhs);
}

void gtaVector3d::set(gtaFloat _x, gtaFloat _y, gtaFloat _z) {
    x = _x;
    y = _y;
    z = _z;
}

void gtaVector3d::set(gtaVector3d const &vec) {
    set(vec.x, vec.y, vec.z);
}

void gtaVector3d::set(gtaVector2d const &vec) {
    set(vec.x, vec.y, 0.0f);
}

gtaVector3d &gtaVector3d::operator=(gtaVector2d const &rhs) {
    set(rhs);
    return *this;
}

gtaVector3d &gtaVector3d::operator+=(const gtaVector3d &rhs) {
    x += rhs.x;
    y += rhs.y;
    z += rhs.z;
    return *this;
}

gtaVector3d &gtaVector3d::operator-=(const gtaVector3d &rhs) {
    x -= rhs.x;
    y -= rhs.y;
    z -= rhs.z;
    return *this;
}

gtaVector3d &gtaVector3d::operator*=(gtaFloat rhs) {
    x *= rhs;
    y *= rhs;
    z *= rhs;
    return *this;
}

gtaVector3d &gtaVector3d::operator/=(gtaFloat rhs) {
    x /= rhs;
    y /= rhs;
    z /= rhs;
    return *this;
}

gtaFloat &gtaVector3d::operator[](gtaUInt index) {
    if (index == 0)
        return x;
    else if (index == 1)
        return y;
    else if (index == 2)
        return z;
    else {
        static gtaFloat null = 0.0f;
        return null;
    }
}

gtaFloat gtaVector3d::operator[](gtaUInt index) const {
    if (index == 0)
        return x;
    else if (index == 1)
        return y;
    else if (index == 2)
        return z;
    else {
        static gtaFloat null = 0.0f;
        return null;
    }
}

gtaBool gtaVector3d::isNull() const {
    return x == 0.0f && y == 0.0f && z == 0.0f;
}

gtaFloat gtaVector3d::lengthSquared() const {
    return x * x + y * y + z * z;
}

gtaFloat gtaVector3d::length() const {
    return gtaFloat(std::sqrt(gtaDouble(x) * gtaDouble(x) + gtaDouble(y) * gtaDouble(y) + gtaDouble(z) * gtaDouble(z)));
}

void gtaVector3d::normalize() {
    gtaDouble l = gtaDouble(x) * gtaDouble(x) + gtaDouble(y) * gtaDouble(y) + gtaDouble(z) * gtaDouble(z);
    if (l == 0.0f)
        return;
    l = std::sqrt(l);
    x = gtaFloat(gtaDouble(x) / l);
    y = gtaFloat(gtaDouble(y) / l);
    z = gtaFloat(gtaDouble(z) / l);
}

gtaVector3d gtaVector3d::normalized() const {
    gtaVector3d result(*this);
    result.normalize();
    return result;
}

void gtaVector3d::invert() {
    x = -x;
    y = -y;
    z = -z;
}

gtaVector3d gtaVector3d::inverted() const {
    return gtaVector3d(-x, -y, -z);
}

gtaFloat gtaVector3d::distance(gtaVector3d const &vec) const {
    return (vec - *this).length();
}

gtaString gtaVector3d::toString() const {
    return gtaUtils::format("%g,%g,%g", x, y, z);
}

gtaVector3d operator+(gtaVector3d const &a, gtaVector3d const &b) {
    return gtaVector3d(a.x + b.x, a.y + b.y, a.z + b.z);
}

gtaVector3d operator-(gtaVector3d const &a, gtaVector3d const &b) {
    return gtaVector3d(a.x - b.x, a.y - b.y, a.z - b.z);
}

gtaBool operator==(gtaVector3d const &a, gtaVector3d const &b) {
    return a.x == b.x && a.y == b.y && a.z == b.z;
}

gtaBool operator!=(gtaVector3d const &a, gtaVector3d const &b) {
    return a.x != b.x || a.y != b.y || a.z != b.z;
}

gtaVector3d operator+(gtaVector3d const &a, gtaFloat b) {
    return gtaVector3d(a.x + b, a.y + b, a.z + b);
}

gtaVector3d operator-(gtaVector3d const &a, gtaFloat b) {
    return gtaVector3d(a.x - b, a.y - b, a.z - b);
}

gtaVector3d operator*(gtaVector3d const &a, gtaFloat b) {
    return gtaVector3d(a.x * b, a.y * b, a.z * b);
}

gtaVector3d operator*(gtaFloat a, gtaVector3d const &b) {
    return gtaVector3d(a * b.x, a * b.y, a * b.z);
}

gtaVector3d operator/(gtaVector3d const &a, gtaFloat b) {
    return gtaVector3d(a.x / b, a.y / b, a.z / b);
}

gtaFloat distance(gtaVector3d const &a, gtaVector3d const &b) {
    return (b - a).length();
}

gtaFloat dotProduct(gtaVector3d const &a, gtaVector3d const &b) {
    return a.x * b.x + a.y * b.y + a.z * b.z;
}

gtaVector3d crossProduct(gtaVector3d const &a, gtaVector3d const &b) {
    return gtaVector3d(
        a.y * b.z - a.z * b.y,
        a.z * b.x - a.x * b.z,
        a.x * b.y - a.y * b.x);
}
