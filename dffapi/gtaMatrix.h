/***************************************************/
/* dffapi 2.0
/* https://github.com/DK22Pac/dffapi
/*
/* 3D Matrix
/*
/***************************************************/
#pragma once
#include "gtaVector3d.h"

struct gtaMatrix {
    gtaVector3d right;
    gtaVector3d up;
    gtaVector3d at;
    gtaVector3d pos;

    gtaMatrix();
    gtaMatrix(gtaVector3d const &_right, gtaVector3d const &_up, gtaVector3d const &_at, gtaVector3d const &_pos);
    void set(gtaVector3d const &_right, gtaVector3d const &_up, gtaVector3d const &_at, gtaVector3d const &_pos);
    void set(gtaMatrix const &matrix);
    gtaString toString() const;
};
