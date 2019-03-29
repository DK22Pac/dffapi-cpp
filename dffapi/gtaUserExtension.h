/***************************************************/
/* dffapi 2.0
/* https://github.com/DK22Pac/dffapi
/***************************************************/
#pragma once
#include "gtaPropertied.h"

class gtaUserExtension abstract : public gtaPropertied {
    virtual gtaUInt id() = 0;
    virtual void read() = 0;
    virtual void write() = 0;
    virtual void size() = 0;
};
