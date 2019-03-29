/***************************************************/
/* dffapi 2.0
/* https://github.com/DK22Pac/dffapi
/*
/* 2D Texture coordinates
/*
/***************************************************/
#pragma once
#include "gtaTypes.h"

struct gtaTexCoords {
    gtaFloat u = 0.0f;
    gtaFloat v = 0.0f;

    gtaTexCoords();
    gtaTexCoords(gtaFloat _u, gtaFloat _v);
    void set(gtaFloat _u, gtaFloat _v);
    void set(gtaTexCoords const &coords);
    gtaFloat &operator[](gtaUInt index);
    gtaFloat operator[](gtaUInt index) const;
    void normalize();
    gtaTexCoords normalized() const;
    gtaString toString() const;
};

gtaBool operator==(gtaTexCoords const &a, gtaTexCoords const &b);
gtaBool operator!=(gtaTexCoords const &a, gtaTexCoords const &b);
