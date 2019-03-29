/***************************************************/
/* dffapi 2.0
/* https://github.com/DK22Pac/dffapi
/*
/* 3D Line
/*
/***************************************************/
#pragma once
#include "gtaTypes.h"
#include "gtaVector3d.h"

struct gtaSphere;
struct gtaBoundingBox;

struct gtaLine {
    gtaVector3d start;
    gtaVector3d end;

    gtaLine();
    gtaLine(gtaVector3d const &_start, gtaVector3d const &_end);
    void set(gtaVector3d const &_start, gtaVector3d const &_end);
    void set(gtaLine const &line);
    gtaFloat length() const;
    gtaString toString() const;
};

gtaBool operator==(gtaLine const &a, gtaLine const &b);
gtaBool operator!=(gtaLine const &a, gtaLine const &b);
