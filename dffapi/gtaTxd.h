/***************************************************/
/* dffapi 2.0
/* https://github.com/DK22Pac/dffapi
/***************************************************/
#pragma once
#include "gtaTexture.h"

class gtaTxd : public gtaExtendable, public gtaPropertied {
private:
    gtaVector<gtaSmartPtr<gtaTexture>> mTextures;
public:
    gtaUShort getNumTextures();
    void clear();
    gtaTexture *findTexture(gtaString const &textureName, gtaBool caseInsensitive = false);
};
