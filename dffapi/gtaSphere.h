/***************************************************/
/* dffapi 2.0
/* https://github.com/DK22Pac/dffapi
/*
/* 3D Sphere
/*
/***************************************************/
#pragma once
#include "gtaVector3d.h"

struct gtaLine;
struct gtaBox;

struct gtaSphere {
    gtaVector3d center;
    gtaFloat radius = 0.0f;

    gtaSphere();
    gtaSphere(gtaVector3d const &_center, gtaFloat _radius);
    void set(gtaVector3d const &_center, gtaFloat _radius);
    void set(gtaSphere const &sphere);
    gtaString toString() const;
};

gtaBool operator==(gtaSphere const &a, gtaSphere const &b);
gtaBool operator!=(gtaSphere const &a, gtaSphere const &b);
