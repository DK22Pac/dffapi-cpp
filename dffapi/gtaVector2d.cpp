/***************************************************/
/* dffapi 2.0
/* https://github.com/DK22Pac/dffapi
/***************************************************/
#include "gtaVector2d.h"
#include "gtaVector3d.h"
#include "gtaUtils.h"
#include <math.h>

gtaVector2d::gtaVector2d() {}

gtaVector2d::gtaVector2d(gtaFloat _x, gtaFloat _y) {
    set(_x, _y);
}

gtaVector2d::gtaVector2d(gtaVector3d const &rhs) {
    set(rhs);
}

void gtaVector2d::set(gtaFloat _x, gtaFloat _y) {
    x = _x;
    y = _y;
}

void gtaVector2d::set(gtaVector2d const &vec) {
    set(vec.x, vec.y);
}

void gtaVector2d::set(gtaVector3d const &vec) {
    set(vec.x, vec.y);
}

gtaVector2d &gtaVector2d::operator=(gtaVector3d const &rhs) {
    set(rhs);
    return *this;
}

gtaVector2d &gtaVector2d::operator+=(const gtaVector2d &rhs) {
    x += rhs.x;
    y += rhs.y;
    return *this;
}

gtaVector2d &gtaVector2d::operator-=(const gtaVector2d &rhs) {
    x -= rhs.x;
    y -= rhs.y;
    return *this;
}

gtaVector2d &gtaVector2d::operator*=(gtaFloat rhs) {
    x *= rhs;
    y *= rhs;
    return *this;
}

gtaVector2d &gtaVector2d::operator/=(gtaFloat rhs) {
    x /= rhs;
    y /= rhs;
    return *this;
}

gtaFloat &gtaVector2d::operator[](gtaUInt index) {
    if (index == 0)
        return x;
    else if (index == 1)
        return y;
    else {
        static gtaFloat null = 0.0f;
        return null;
    }
}

gtaFloat gtaVector2d::operator[](gtaUInt index) const {
    if (index == 0)
        return x;
    else if (index == 1)
        return y;
    else {
        static gtaFloat null = 0.0f;
        return null;
    }
}

gtaBool gtaVector2d::isNull() const {
    return x == 0.0f && y == 0.0f;
}

gtaFloat gtaVector2d::lengthSquared() const {
    return x * x + y * y;
}

gtaFloat gtaVector2d::length() const {
    return gtaFloat(std::sqrt(gtaDouble(x) * gtaDouble(x) + gtaDouble(y) * gtaDouble(y)));
}

void gtaVector2d::normalize() {
    gtaDouble l = gtaDouble(x) * gtaDouble(x) + gtaDouble(y) * gtaDouble(y);
    if (l == 0.0f)
        return;
    l = std::sqrt(l);
    x = gtaFloat(gtaDouble(x) / l);
    y = gtaFloat(gtaDouble(y) / l);
}

gtaVector2d gtaVector2d::normalized() const {
    gtaVector2d result(*this);
    result.normalize();
    return result;
}

void gtaVector2d::invert() {
    x = -x;
    y = -y;
}

gtaVector2d gtaVector2d::inverted() const {
    return gtaVector2d(-x, -y);
}

gtaFloat gtaVector2d::distance(gtaVector2d const &vec) const {
    return (vec - *this).length();
}

gtaString gtaVector2d::toString() const {
    return gtaUtils::format("%g,%g", x, y);
}

gtaVector2d operator+(gtaVector2d const &a, gtaVector2d const &b) {
    return gtaVector2d(a.x + b.x, a.y + b.y);
}

gtaVector2d operator-(gtaVector2d const &a, gtaVector2d const &b) {
    return gtaVector2d(a.x - b.x, a.y - b.y);
}

gtaBool operator==(gtaVector2d const &a, gtaVector2d const &b) {
    return a.x == b.x && a.y == b.y;
}

gtaBool operator!=(gtaVector2d const &a, gtaVector2d const &b) {
    return a.x != b.x || a.y != b.y;
}

gtaVector2d operator+(gtaVector2d const &a, gtaFloat b) {
    return gtaVector2d(a.x + b, a.y + b);
}

gtaVector2d operator-(gtaVector2d const &a, gtaFloat b) {
    return gtaVector2d(a.x - b, a.y - b);
}

gtaVector2d operator*(gtaVector2d const &a, gtaFloat b) {
    return gtaVector2d(a.x * b, a.y * b);
}

gtaVector2d operator*(gtaFloat a, gtaVector2d const &b) {
    return gtaVector2d(a * b.x, a * b.y);
}

gtaVector2d operator/(gtaVector2d const &a, gtaFloat b) {
    return gtaVector2d(a.x / b, a.y / b);
}

gtaFloat distance(gtaVector2d const &a, gtaVector2d const &b) {
    return (b - a).length();
}

gtaFloat dotProduct(gtaVector2d const &a, gtaVector2d const &b) {
    return a.x * b.x + a.y * b.y;
}

gtaFloat crossProduct(gtaVector2d const &a, gtaVector2d const &b) {
    return a.x * b.y - a.y * b.x;
}
