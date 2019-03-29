/***************************************************/
/* dffapi 2.0
/* https://github.com/DK22Pac/dffapi
/***************************************************/
#include "gtaTxd.h"

gtaUShort gtaTxd::getNumTextures() {
    return gtaUShort(mTextures.size());
}

void gtaTxd::clear() {
    mTextures.clear();
}

gtaTexture *gtaTxd::findTexture(gtaString const & textureName, gtaBool caseInsensitive) {
    for (auto const &t : mTextures) {
        if (caseInsensitive) {
            if (!_stricmp(t->getName().c_str(), textureName.c_str()))
                return t.get();
        }
        else {
            if (!strcmp(t->getName().c_str(), textureName.c_str()))
                return t.get();
        }
    }
    return nullptr;
}
