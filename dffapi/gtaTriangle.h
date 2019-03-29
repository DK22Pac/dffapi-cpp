/***************************************************/
/* dffapi 2.0
/* https://github.com/DK22Pac/dffapi
/*
/* 3D Triangle with vertex indices and material ID
/*
/***************************************************/
#pragma once
#include "gtaTypes.h"

struct gtaTriangle {
    gtaUShort a = 0;
    gtaUShort b = 0;
    gtaUShort c = 0;
    gtaUChar material = 0;

    gtaTriangle();
    gtaTriangle(gtaUShort _a, gtaUShort _b, gtaUShort _c, gtaUChar _material = 0);
    void set(gtaUShort _a, gtaUShort _b, gtaUShort _c, gtaUChar _material = 0);
    void set(gtaTriangle const &triangle);
    gtaUShort &operator[](gtaUInt index);
    gtaUShort operator[](gtaUInt index) const;
    gtaString toString() const;
    gtaBool comparePosition(gtaTriangle const &triangle) const;
};

gtaBool operator==(gtaTriangle const &a, gtaTriangle const &b);
gtaBool operator!=(gtaTriangle const &a, gtaTriangle const &b);
