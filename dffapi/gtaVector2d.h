/***************************************************/
/* dffapi 2.0
/* https://github.com/DK22Pac/dffapi
/*
/* 2D Point
/*
/***************************************************/
#pragma once
#include "gtaTypes.h"

struct gtaVector3d;

struct gtaVector2d {
    gtaFloat x = 0.0f;
    gtaFloat y = 0.0f;

    gtaVector2d();
    gtaVector2d(gtaFloat _x, gtaFloat _y);
    gtaVector2d(gtaVector3d const &rhs);
    void set(gtaFloat _x, gtaFloat _y);
    void set(gtaVector2d const &vec);
    void set(gtaVector3d const &vec);
    gtaVector2d &operator=(gtaVector3d const &rhs);
    gtaVector2d &operator+=(const gtaVector2d &rhs);
    gtaVector2d &operator-=(const gtaVector2d &rhs);
    gtaVector2d &operator*=(gtaFloat rhs);
    gtaVector2d &operator/=(gtaFloat rhs);
    gtaFloat &operator[](gtaUInt index);
    gtaFloat operator[](gtaUInt index) const;
    gtaBool isNull() const;
    gtaFloat lengthSquared() const;
    gtaFloat length() const;
    void normalize();
    gtaVector2d normalized() const;
    void invert();
    gtaVector2d inverted() const;
    gtaFloat distance(gtaVector2d const &vec) const;
    gtaString toString() const;
};

gtaVector2d operator+(gtaVector2d const &a, gtaVector2d const &b);
gtaVector2d operator-(gtaVector2d const &a, gtaVector2d const &b);
gtaBool operator==(gtaVector2d const &a, gtaVector2d const &b);
gtaBool operator!=(gtaVector2d const &a, gtaVector2d const &b);
gtaVector2d operator+(gtaVector2d const &a, gtaFloat b);
gtaVector2d operator-(gtaVector2d const &a, gtaFloat b);
gtaVector2d operator*(gtaVector2d const &a, gtaFloat b);
gtaVector2d operator*(gtaFloat a, gtaVector2d const &b);
gtaVector2d operator/(gtaVector2d const &a, gtaFloat b);
gtaFloat distance(gtaVector2d const &a, gtaVector2d const &b);
gtaFloat dotProduct(gtaVector2d const &a, gtaVector2d const &b);
gtaFloat crossProduct(gtaVector2d const &a, gtaVector2d const &b);
