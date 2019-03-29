/***************************************************/
/* dffapi 2.0
/* https://github.com/DK22Pac/dffapi
/***************************************************/
#include "gtaSphere.h"
#include "gtaLine.h"
#include "gtaBox.h"
#include "gtaUtils.h"

gtaSphere::gtaSphere() {}

gtaSphere::gtaSphere(gtaVector3d const &_center, gtaFloat _radius) {
    set(_center, _radius);
}

void gtaSphere::set(gtaVector3d const &_center, gtaFloat _radius) {
    center = _center;
    radius = _radius;
}

void gtaSphere::set(gtaSphere const &sphere) {
    center = sphere.center;
    radius = sphere.radius;
}

gtaString gtaSphere::toString() const {
    return gtaUtils::format("%g,%g,%g - %g", center.x, center.y, center.z, radius);
}

gtaBool operator==(gtaSphere const &a, gtaSphere const &b) {
    return a.center == b.center && a.radius == b.radius;
}
gtaBool operator!=(gtaSphere const &a, gtaSphere const &b) {
    return a.center != b.center || a.radius != b.radius;
}
