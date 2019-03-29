/***************************************************/
/* dffapi 2.0
/* https://github.com/DK22Pac/dffapi
/*
/* 3D Box (axis-aligned)
/*
/***************************************************/
#pragma once
#include "gtaVector3d.h"

struct gtaLine;
struct gtaSphere;

struct gtaBox {
    gtaVector3d min;
    gtaVector3d max;

    gtaBox();
    gtaBox(gtaVector3d const &_min, gtaVector3d const &_max);
    void set(gtaVector3d const &_min, gtaVector3d const &_max);
    void set(gtaBox const &box);
    gtaString toString() const;
    gtaVector3d center() const;
    gtaFloat width() const;
    gtaFloat height() const;
    gtaFloat depth() const;
};

gtaBool operator==(gtaSphere const &a, gtaSphere const &b);
gtaBool operator!=(gtaSphere const &a, gtaSphere const &b);
