/***************************************************/
/* dffapi 2.0
/* https://github.com/DK22Pac/dffapi
/*
/* 3D Quaternion
/*
/***************************************************/
#pragma once
#include "gtaTypes.h"
#include "gtaVector3d.h"

struct gtaQuaternion {
    gtaFloat x = 0.0f;
    gtaFloat y = 0.0f;
    gtaFloat z = 0.0f;
    gtaFloat w = 1.0f;

    gtaQuaternion();
    gtaQuaternion(gtaFloat _x, gtaFloat _y, gtaFloat _z, gtaFloat _w);
    void set(gtaFloat _x, gtaFloat _y, gtaFloat _z, gtaFloat _w);
    void set(gtaQuaternion const &quaternion);
    void setVector(float _x, float _y, float _z);
    void setVector(gtaVector3d const &vec);
    gtaString toString() const;
    gtaBool isNull() const;
    gtaBool isIdentity() const;
    gtaQuaternion &operator+=(const gtaQuaternion &rhs);
    gtaQuaternion &operator-=(const gtaQuaternion &rhs);
    gtaQuaternion &operator*=(gtaFloat rhs);
    gtaQuaternion &operator/=(gtaFloat rhs);
    gtaQuaternion inverted() const;
    gtaQuaternion conjugated();
    gtaFloat lengthSquared() const;
    gtaFloat length() const;
};

gtaQuaternion operator+(gtaQuaternion const &a, gtaQuaternion const &b);
gtaQuaternion operator-(gtaQuaternion const &a, gtaQuaternion const &b);
gtaBool operator==(gtaQuaternion const &a, gtaQuaternion const &b);
gtaBool operator!=(gtaQuaternion const &a, gtaQuaternion const &b);
gtaQuaternion operator*(gtaQuaternion const &a, gtaFloat b);
gtaQuaternion operator*(gtaFloat a, gtaQuaternion const &b);
gtaQuaternion operator/(gtaQuaternion const &a, gtaFloat b);
gtaFloat dotProduct(gtaQuaternion const &a, gtaQuaternion const &b);

using gtaQuat = gtaQuaternion;
