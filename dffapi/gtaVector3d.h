/***************************************************/
/* dffapi 2.0
/* https://github.com/DK22Pac/dffapi
/*
/* 3D Point
/*
/***************************************************/
#pragma once
#include "gtaTypes.h"

struct gtaVector2d;

struct gtaVector3d {
    gtaFloat x = 0.0f;
    gtaFloat y = 0.0f;
    gtaFloat z = 0.0f;

    gtaVector3d();
    gtaVector3d(gtaFloat _x, gtaFloat _y, gtaFloat _z);
    gtaVector3d(gtaVector2d const &rhs);
    void set(gtaFloat _x, gtaFloat _y, gtaFloat _z);
    void set(gtaVector3d const &vec);
    void set(gtaVector2d const &vec);
    gtaVector3d &operator=(gtaVector2d const &rhs);
    gtaVector3d &operator+=(const gtaVector3d &rhs);
    gtaVector3d &operator-=(const gtaVector3d &rhs);
    gtaVector3d &operator*=(gtaFloat rhs);
    gtaVector3d &operator/=(gtaFloat rhs);
    gtaFloat &operator[](gtaUInt index);
    gtaFloat operator[](gtaUInt index) const;
    gtaBool isNull() const;
    gtaFloat lengthSquared() const;
    gtaFloat length() const;
    void normalize();
    gtaVector3d normalized() const;
    void invert();
    gtaVector3d inverted() const;
    gtaFloat distance(gtaVector3d const &vec) const;
    gtaString toString() const;
};

gtaVector3d operator+(gtaVector3d const &a, gtaVector3d const &b);
gtaVector3d operator-(gtaVector3d const &a, gtaVector3d const &b);
gtaBool operator==(gtaVector3d const &a, gtaVector3d const &b);
gtaBool operator!=(gtaVector3d const &a, gtaVector3d const &b);
gtaVector3d operator+(gtaVector3d const &a, gtaFloat b);
gtaVector3d operator-(gtaVector3d const &a, gtaFloat b);
gtaVector3d operator*(gtaVector3d const &a, gtaFloat b);
gtaVector3d operator*(gtaFloat a, gtaVector3d const &b);
gtaVector3d operator/(gtaVector3d const &a, gtaFloat b);
gtaFloat distance(gtaVector3d const &a, gtaVector3d const &b);
gtaFloat dotProduct(gtaVector3d const &a, gtaVector3d const &b);
gtaVector3d crossProduct(gtaVector3d const &a, gtaVector3d const &b);
