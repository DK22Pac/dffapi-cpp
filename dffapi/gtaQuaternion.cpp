/***************************************************/
/* dffapi 2.0
/* https://github.com/DK22Pac/dffapi
/***************************************************/
#include "gtaQuaternion.h"
#include "gtaUtils.h"

gtaQuaternion::gtaQuaternion() {}

gtaQuaternion::gtaQuaternion(gtaFloat _x, gtaFloat _y, gtaFloat _z, gtaFloat _w) {
    set(_x, _y, _z, _w);
}

void gtaQuaternion::set(gtaFloat _x, gtaFloat _y, gtaFloat _z, gtaFloat _w) {
    x = _x;
    y = _y;
    z = _z;
    w = _w;
}

void gtaQuaternion::set(gtaQuaternion const & quaternion) {
    set(quaternion.x, quaternion.y, quaternion.z, quaternion.w);
}

void gtaQuaternion::setVector(float _x, float _y, float _z) {
    x = _x;
    y = _y;
    z = _z;
}

void gtaQuaternion::setVector(gtaVector3d const & vec) {
    setVector(vec.x, vec.y, vec.z);
}

gtaString gtaQuaternion::toString() const {
    return gtaUtils::format("%g,%g,%g,%g", x, y, z, w);
}

gtaBool gtaQuaternion::isNull() const {
    return x == 0.0f && y == 0.0f && z == 0.0f && w == 0.0f;
}

gtaBool gtaQuaternion::isIdentity() const {
    return x == 0.0f && y == 0.0f && z == 0.0f && w == 1.0f;
}

gtaQuaternion &gtaQuaternion::operator+=(const gtaQuaternion &rhs) {
    x += rhs.x;
    y += rhs.y;
    z += rhs.z;
    w += rhs.w;
    return *this;
}

gtaQuaternion &gtaQuaternion::operator-=(const gtaQuaternion &rhs) {
    x -= rhs.x;
    y -= rhs.y;
    z -= rhs.z;
    w -= rhs.w;
    return *this;
}

gtaQuaternion &gtaQuaternion::operator*=(gtaFloat rhs) {
    x *= rhs;
    y *= rhs;
    z *= rhs;
    w *= rhs;
    return *this;
}

gtaQuaternion &gtaQuaternion::operator/=(gtaFloat rhs) {
    x /= rhs;
    y /= rhs;
    z /= rhs;
    w /= rhs;
    return *this;
}

gtaQuaternion gtaQuaternion::inverted() const {
    gtaDouble l = gtaDouble(x) * gtaDouble(x) + gtaDouble(y) * gtaDouble(y) + gtaDouble(z) * gtaDouble(z) + gtaDouble(w) * gtaDouble(w);
    if (l == 0.0f)
        return gtaQuaternion(0.0f, 0.0f, 0.0f, 0.0f);
    return gtaQuaternion(gtaFloat(gtaDouble(-x) / l), gtaFloat(gtaDouble(-y) / l), gtaFloat(gtaDouble(-z) / l), gtaFloat(gtaDouble(w) / l));
}

gtaQuaternion gtaQuaternion::conjugated() {
    return gtaQuaternion(-x, -y, -z, w);
}

gtaFloat gtaQuaternion::lengthSquared() const {
    return x * x + y * y + z * z + w * w;
}

gtaFloat gtaQuaternion::length() const {
    return gtaFloat(std::sqrt(gtaDouble(x) * gtaDouble(x) + gtaDouble(y) * gtaDouble(y) + gtaDouble(z) * gtaDouble(z) + gtaDouble(w) * gtaDouble(w)));
}

gtaQuaternion operator+(gtaQuaternion const &a, gtaQuaternion const &b) {
    return gtaQuaternion(a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w);
}

gtaQuaternion operator-(gtaQuaternion const &a, gtaQuaternion const &b) {
    return gtaQuaternion(a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w);
}

gtaBool operator==(gtaQuaternion const &a, gtaQuaternion const &b) {
    return a.x == b.x && a.y == b.y && a.z == b.z && a.w == b.w;
}

gtaBool operator!=(gtaQuaternion const &a, gtaQuaternion const &b) {
    return a.x != b.x || a.y != b.y || a.z != b.z || a.w != b.w;
}

gtaQuaternion operator*(gtaQuaternion const &a, gtaFloat b) {
    return gtaQuaternion(a.x * b, a.y * b, a.z * b, a.w * b);
}

gtaQuaternion operator*(gtaFloat a, gtaQuaternion const &b) {
    return gtaQuaternion(a * b.x, a * b.y, a * b.z, a * b.w);
}

gtaQuaternion operator/(gtaQuaternion const &a, gtaFloat b) {
    return gtaQuaternion(a.x / b, a.y / b, a.z / b, a.w / b);
}

gtaFloat dotProduct(gtaQuaternion const &a, gtaQuaternion const &b) {
    return a.x * b.x + a.y * b.y + a.z * b.z + a.w * b.w;
}
