/***************************************************/
/* dffapi 2.0
/* https://github.com/DK22Pac/dffapi
/***************************************************/
#pragma once
#include "gtaPropertied.h"
#include "gtaExtendable.h"
#include "gtaFilterMode.h"
#include "gtaTextureAddressMode.h"
#include "gtaPixelFormat.h"
#include "gtaColor.h"

class gtaTexture : public gtaExtendable, public gtaPropertied {
private:
    gtaString mName;
    gtaFilterMode mFiltering = gtaFilterMode::Linear;
    gtaFilterMode mMipFiltering = gtaFilterMode::Linear;
    gtaTextureAddressMode mUAddressing = gtaTextureAddressMode::Wrap;
    gtaTextureAddressMode mVAddressing = gtaTextureAddressMode::Wrap;
    gtaUShort mWidth = 0;
    gtaUShort mHeight = 0;
    gtaPixelFormat mPixelFormat = gtaPixelFormat::A8R8G8B8;
    gtaUChar mNumLevels = 1;
    gtaBool mIsCubeTexture = false;
    gtaBool mAutoMipMapsEnabled = false;
    gtaVector<gtaColor> mPalette;
    gtaUChar *mPixels = nullptr;
    gtaUInt mPixelsSize = 0;
public:
    gtaString const &getName();
    void setName(gtaString const &name);
    gtaFilterMode getFiltering();
    void setFiltering(gtaFilterMode filtering);
    gtaFilterMode getMipFiltering();
    void setMipFiltering(gtaFilterMode mipFiltering);
    void getFiltering(gtaFilterMode &filtering, gtaFilterMode &mipFiltering);
    void setFiltering(gtaFilterMode filtering, gtaFilterMode mipFiltering);
    gtaTextureAddressMode getUAddressing();
    void setUAddressing(gtaTextureAddressMode uAddressing);
    gtaTextureAddressMode getVAddressing();
    void setVAddressing(gtaTextureAddressMode vAddressing);
    void getAddressing(gtaTextureAddressMode &uAddressing, gtaTextureAddressMode &vAddressing);
    void setAddressing(gtaTextureAddressMode uAddressing, gtaTextureAddressMode vAddressing);
    gtaUShort getWidth();
    void setWidth(gtaUShort width);
    gtaUShort getHeight();
    void setHeight(gtaUShort height);
    void getSize(gtaUShort &width, gtaUShort &height);
    void setSize(gtaUShort width, gtaUShort height);
    gtaPixelFormat getPixelFormat();
    void setPixelFormat(gtaPixelFormat format);
    gtaUChar getNumLevels();
    void setNumLevels(gtaUChar numLevels);
    gtaBool getIsCubeTexture();
    void setIsCubeTexture(gtaBool isCubeTexture);
    gtaBool getAutoMipMapsEnabled();
    void setAutoMipMapsEnabled(gtaBool autoMipMapsEnabled);
    gtaVector<gtaColor> const &getPalette();
};
