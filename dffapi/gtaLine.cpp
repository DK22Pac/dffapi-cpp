/***************************************************/
/* dffapi 2.0
/* https://github.com/DK22Pac/dffapi
/***************************************************/
#include "gtaLine.h"
#include "gtaUtils.h"

gtaLine::gtaLine() {}

gtaLine::gtaLine(gtaVector3d const &_start, gtaVector3d const &_end) {
    set(_start, _end);
}

void gtaLine::set(gtaVector3d const &_start, gtaVector3d const &_end) {
    start = _start;
    end = _end;
}

void gtaLine::set(gtaLine const &line) {
    start = line.start;
    end = line.end;
}

gtaFloat gtaLine::length() const {
    return distance(start, end);
}

gtaString gtaLine::toString() const {
    return gtaUtils::format("%g,%g,%g - %g,%g,%g", start.x, start.y, start.z, end.x, end.y, end.z);
}

gtaBool operator==(gtaLine const &a, gtaLine const &b) {
    return a.start == b.start && a.end == b.end;
}

gtaBool operator!=(gtaLine const &a, gtaLine const &b) {
    return a.start != b.start || a.end != b.end;
}
