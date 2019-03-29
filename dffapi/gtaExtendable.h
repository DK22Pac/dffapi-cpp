/***************************************************/
/* dffapi 2.0
/* https://github.com/DK22Pac/dffapi
/***************************************************/
#pragma once
#include "gtaTypes.h"
#include "gtaUserExtension.h"

class gtaExtendable {
private:
    gtaVector<gtaSmartPtr<gtaUserExtension>> mUserExtensions;
public:
};
