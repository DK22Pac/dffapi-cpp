/***************************************************/
/* dffapi 2.0
/* https://github.com/DK22Pac/dffapi
/***************************************************/
#include "gtaTexture.h"

gtaString const & gtaTexture::getName() {
    return mName;
}

void gtaTexture::setName(gtaString const & name) {
    mName = name;
}

gtaFilterMode gtaTexture::getFiltering() {
    return mFiltering;
}

void gtaTexture::setFiltering(gtaFilterMode filtering) {
    mFiltering = filtering;
}

gtaFilterMode gtaTexture::getMipFiltering() {
    return mMipFiltering;
}

void gtaTexture::setMipFiltering(gtaFilterMode mipFiltering) {
    mMipFiltering = mipFiltering;
}

void gtaTexture::getFiltering(gtaFilterMode & filtering, gtaFilterMode & mipFiltering) {
    filtering = mFiltering;
    mipFiltering = mMipFiltering;
}

void gtaTexture::setFiltering(gtaFilterMode filtering, gtaFilterMode mipFiltering) {
    mFiltering = filtering;
    mMipFiltering = mipFiltering;
}

gtaTextureAddressMode gtaTexture::getUAddressing() {
    return mUAddressing;
}

void gtaTexture::setUAddressing(gtaTextureAddressMode uAddressing) {
    mUAddressing = uAddressing;
}

gtaTextureAddressMode gtaTexture::getVAddressing() {
    return mVAddressing;
}

void gtaTexture::setVAddressing(gtaTextureAddressMode vAddressing) {
    mVAddressing = vAddressing;
}

void gtaTexture::getAddressing(gtaTextureAddressMode & uAddressing, gtaTextureAddressMode & vAddressing) {
    uAddressing = mUAddressing;
    vAddressing = mVAddressing;
}

void gtaTexture::setAddressing(gtaTextureAddressMode uAddressing, gtaTextureAddressMode vAddressing) {
    mUAddressing = uAddressing;
    mVAddressing = vAddressing;
}

gtaUShort gtaTexture::getWidth() {
    return mWidth;
}

void gtaTexture::setWidth(gtaUShort width) {
    mWidth = width;
}

gtaUShort gtaTexture::getHeight() {
    return mHeight;
}

void gtaTexture::setHeight(gtaUShort height) {
    mHeight = height;
}

void gtaTexture::getSize(gtaUShort & width, gtaUShort & height) {
    width = mWidth;
    height = mHeight;
}

void gtaTexture::setSize(gtaUShort width, gtaUShort height) {
    mWidth = width;
    mHeight = height;
}

gtaPixelFormat gtaTexture::getPixelFormat() {
    return mPixelFormat;
}

void gtaTexture::setPixelFormat(gtaPixelFormat format) {
    mPixelFormat = format;
}

gtaUChar gtaTexture::getNumLevels() {
    return mNumLevels;
}

void gtaTexture::setNumLevels(gtaUChar numLevels) {
    mNumLevels = numLevels;
}

gtaBool gtaTexture::getIsCubeTexture() {
    return mIsCubeTexture;
}

void gtaTexture::setIsCubeTexture(gtaBool isCubeTexture) {
    mIsCubeTexture = isCubeTexture;
}

gtaBool gtaTexture::getAutoMipMapsEnabled() {
    return mAutoMipMapsEnabled;
}

void gtaTexture::setAutoMipMapsEnabled(gtaBool autoMipMapsEnabled) {
    mAutoMipMapsEnabled = autoMipMapsEnabled;
}

gtaVector<gtaColor> const & gtaTexture::getPalette() {
    return mPalette;
}

void gtaTexture::setPalette(gtaVector<gtaColor> const & palette) {
    mPalette = palette;
}

void gtaTexture::setPalette(gtaVector<gtaColor>&& palette) {
    mPalette = std::move(palette);
}

gtaVector<gtaUChar> const & gtaTexture::getPixels() {
    return mPixels;
}

void gtaTexture::setPixels(gtaVector<gtaUChar> const & pixels) {
    mPixels = pixels;
}

void gtaTexture::setPixels(gtaVector<gtaUChar>&& pixels) {
    mPixels = std::move(pixels);
}
