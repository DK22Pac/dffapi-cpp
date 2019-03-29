/***************************************************/
/* dffapi 2.0
/* https://github.com/DK22Pac/dffapi
/***************************************************/
#include "gtaColor.h"
#include "gtaUtils.h"

void gtaColor::set(gtaUChar red, gtaUChar green, gtaUChar blue, gtaUChar alpha) {
    r = red;
    g = green;
    b = blue;
    a = alpha;
}

void gtaColor::set(gtaColor const &color) {
    set(color.r, color.g, color.b, color.a);
}

gtaColor::gtaColor() {}

gtaColor::gtaColor(gtaUChar red, gtaUChar green, gtaUChar blue, gtaUChar alpha) {
    set(red, green, blue, alpha);
}

gtaUChar &gtaColor::operator[](gtaUInt index) {
    if (index == 0)
        return r;
    else if (index == 1)
        return g;
    else if (index == 2)
        return b;
    else if (index == 3)
        return a;
    else {
        static gtaUChar null = 0;
        return null;
    }
}

gtaUChar gtaColor::operator[](gtaUInt index) const {
    if (index == 0)
        return r;
    else if (index == 1)
        return g;
    else if (index == 2)
        return b;
    else if (index == 3)
        return a;
    else {
        static gtaUChar null = 0;
        return null;
    }
}

gtaString gtaColor::toString() const {
    return gtaUtils::format("%u,%u,%u,%u", r, g, b, a);
}

gtaBool gtaColor::compareRGB(gtaColor const & color) {
    return r == color.r && g == color.g && b == color.b;
}

gtaBool operator==(gtaColor const &a, gtaColor const &b) {
    return a.r == b.r && a.g == b.g && a.b == b.b && a.a == b.a;
}

gtaBool operator!=(gtaColor const &a, gtaColor const &b) {
    return a.r != b.r || a.g != b.g || a.b != b.b || a.a != b.a;
}

const gtaColor gtaIndianRed = { 205,  92,  92, 255 };
const gtaColor gtaLightCoral = { 240, 128, 128, 255 };
const gtaColor gtaSalmon = { 250, 128, 114, 255 };
const gtaColor gtaDarkSalmon = { 233, 150, 122, 255 };
const gtaColor gtaLightSalmon = { 255, 160, 122, 255 };
const gtaColor gtaCrimson = { 220,  20,  60, 255 };
const gtaColor gtaRed = { 255,   0,   0, 255 };
const gtaColor gtaFireBrick = { 178,  34,  34, 255 };
const gtaColor gtaDarkRed = { 139,   0,   0, 255 };
const gtaColor gtaPink = { 255, 192, 203, 255 };
const gtaColor gtaLightPink = { 255, 182, 193, 255 };
const gtaColor gtaHotPink = { 255, 105, 180, 255 };
const gtaColor gtaDeepPink = { 255,  20, 147, 255 };
const gtaColor gtaMediumVioletRed = { 199,  21, 133, 255 };
const gtaColor gtaPaleVioletRed = { 219, 112, 147, 255 };
const gtaColor gtaCoral = { 255, 127,  80, 255 };
const gtaColor gtaTomato = { 255,  99,  71, 255 };
const gtaColor gtaOrangeRed = { 255,  69,   0, 255 };
const gtaColor gtaDarkOrange = { 255, 140,   0, 255 };
const gtaColor gtaOrange = { 255, 165,   0, 255 };
const gtaColor gtaGold = { 255, 215,   0, 255 };
const gtaColor gtaYellow = { 255, 255,   0, 255 };
const gtaColor gtaLightYellow = { 255, 255, 224, 255 };
const gtaColor gtaLemonChion = { 255, 250, 205, 255 };
const gtaColor gtaLightGoldenrodYellow = { 250, 250, 210, 255 };
const gtaColor gtaPapayaWhip = { 255, 239, 213, 255 };
const gtaColor gtaMoccasin = { 255, 228, 181, 255 };
const gtaColor gtaPeachPu = { 255, 218, 185, 255 };
const gtaColor gtaPaleGoldenrod = { 238, 232, 170, 255 };
const gtaColor gtaKhaki = { 240, 230, 140, 255 };
const gtaColor gtaDarkKhaki = { 189, 183, 107, 255 };
const gtaColor gtaLavender = { 230, 230, 250, 255 };
const gtaColor gtaThistle = { 216, 191, 216, 255 };
const gtaColor gtaPlum = { 221, 160, 221, 255 };
const gtaColor gtaViolet = { 238, 130, 238, 255 };
const gtaColor gtaOrchid = { 218, 112, 214, 255 };
const gtaColor gtaFuchsia = { 255,   0, 255, 255 };
const gtaColor gtaMagenta = { 255,   0, 255, 255 };
const gtaColor gtaMediumOrchid = { 186,  85, 211, 255 };
const gtaColor gtaMediumPurple = { 147, 112, 219, 255 };
const gtaColor gtaBlueViolet = { 138,  43, 226, 255 };
const gtaColor gtaDarkViolet = { 148,   0, 211, 255 };
const gtaColor gtaDarkOrchid = { 153,  50, 204, 255 };
const gtaColor gtaDarkMagenta = { 139,   0, 139, 255 };
const gtaColor gtaPurple = { 128,   0, 128, 255 };
const gtaColor gtaIndigo = { 75,   0, 130, 255 };
const gtaColor gtaSlateBlue = { 106,  90, 205, 255 };
const gtaColor gtaDarkSlateBlue = { 72,  61, 139, 255 };
const gtaColor gtaGreenYellow = { 173, 255,  47, 255 };
const gtaColor gtaChartreuse = { 127, 255,   0, 255 };
const gtaColor gtaLawnGreen = { 124, 252,   0, 255 };
const gtaColor gtaLime = { 0, 255,   0, 255 };
const gtaColor gtaLimeGreen = { 50, 205,  50, 255 };
const gtaColor gtaPaleGreen = { 152, 251, 152, 255 };
const gtaColor gtaLightGreen = { 144, 238, 144, 255 };
const gtaColor gtaMediumSpringGreen = { 0, 250, 154, 255 };
const gtaColor gtaSpringGreen = { 0, 255, 127, 255 };
const gtaColor gtaMediumSeaGreen = { 60, 179, 113, 255 };
const gtaColor gtaSeaGreen = { 46, 139,  87, 255 };
const gtaColor gtaForestGreen = { 34, 139,  34, 255 };
const gtaColor gtaGreen = { 0, 128,   0, 255 };
const gtaColor gtaDarkGreen = { 0, 100,   0, 255 };
const gtaColor gtaYellowGreen = { 154, 205,  50, 255 };
const gtaColor gtaOliveDrab = { 107, 142,  35, 255 };
const gtaColor gtaOlive = { 128, 128,   0, 255 };
const gtaColor gtaDarkOliveGreen = { 85, 107,  47, 255 };
const gtaColor gtaMediumAquamarine = { 102, 205, 170, 255 };
const gtaColor gtaDarkSeaGreen = { 143, 188, 143, 255 };
const gtaColor gtaLightSeaGreen = { 32, 178, 170, 255 };
const gtaColor gtaDarkCyan = { 0, 139, 139, 255 };
const gtaColor gtaTeal = { 0, 128, 128, 255 };
const gtaColor gtaAqua = { 0, 255, 255, 255 };
const gtaColor gtaCyan = { 0, 255, 255, 255 };
const gtaColor gtaLightCyan = { 224, 255, 255, 255 };
const gtaColor gtaPaleTurquoise = { 175, 238, 238, 255 };
const gtaColor gtaAquamarine = { 127, 255, 212, 255 };
const gtaColor gtaTurquoise = { 64, 224, 208, 255 };
const gtaColor gtaMediumTurquoise = { 72, 209, 204, 255 };
const gtaColor gtaDarkTurquoise = { 0, 206, 209, 255 };
const gtaColor gtaCadetBlue = { 95, 158, 160, 255 };
const gtaColor gtaSteelBlue = { 70, 130, 180, 255 };
const gtaColor gtaLightSteelBlue = { 176, 196, 222, 255 };
const gtaColor gtaPowderBlue = { 176, 224, 230, 255 };
const gtaColor gtaLightBlue = { 173, 216, 230, 255 };
const gtaColor gtaSkyBlue = { 135, 206, 235, 255 };
const gtaColor gtaLightSkyBlue = { 135, 206, 250, 255 };
const gtaColor gtaDeepSkyBlue = { 0, 191, 255, 255 };
const gtaColor gtaDodgerBlue = { 30, 144, 255, 255 };
const gtaColor gtaCornlowerBlue = { 100, 149, 237, 255 };
const gtaColor gtaMediumSlateBlue = { 123, 104, 238, 255 };
const gtaColor gtaRoyalBlue = { 65, 105, 225, 255 };
const gtaColor gtaBlue = { 0,   0, 255, 255 };
const gtaColor gtaMediumBlue = { 0,   0, 205, 255 };
const gtaColor gtaDarkBlue = { 0,   0, 139, 255 };
const gtaColor gtaNavy = { 0,   0, 128, 255 };
const gtaColor gtaMidnightBlue = { 25,  25, 112, 255 };
const gtaColor gtaCornsilk = { 255, 248, 220, 255 };
const gtaColor gtaBlanchedAlmond = { 255, 235, 205, 255 };
const gtaColor gtaBisque = { 255, 228, 196, 255 };
const gtaColor gtaNavajoWhite = { 255, 222, 173, 255 };
const gtaColor gtaWheat = { 245, 222, 179, 255 };
const gtaColor gtaBurlyWood = { 222, 184, 135, 255 };
const gtaColor gtaTan = { 210, 180, 140, 255 };
const gtaColor gtaRosyBrown = { 188, 143, 143, 255 };
const gtaColor gtaSandyBrown = { 244, 164,  96, 255 };
const gtaColor gtaGoldenrod = { 218, 165,  32, 255 };
const gtaColor gtaDarkGoldenrod = { 184, 134,  11, 255 };
const gtaColor gtaPeru = { 205, 133,  63, 255 };
const gtaColor gtaChocolate = { 210, 105,  30, 255 };
const gtaColor gtaSaddleBrown = { 139,  69,  19, 255 };
const gtaColor gtaSienna = { 160,  82,  45, 255 };
const gtaColor gtaBrown = { 165,  42,  42, 255 };
const gtaColor gtaMaroon = { 128,   0,   0, 255 };
const gtaColor gtaWhite = { 255, 255, 255, 255 };
const gtaColor gtaSnow = { 255, 250, 250, 255 };
const gtaColor gtaHoneydew = { 240, 255, 240, 255 };
const gtaColor gtaMintCream = { 245, 255, 250, 255 };
const gtaColor gtaAzure = { 240, 255, 255, 255 };
const gtaColor gtaAliceBlue = { 240, 248, 255, 255 };
const gtaColor gtaGhostWhite = { 248, 248, 255, 255 };
const gtaColor gtaWhiteSmoke = { 245, 245, 245, 255 };
const gtaColor gtaSeashell = { 255, 245, 238, 255 };
const gtaColor gtaBeige = { 245, 245, 220, 255 };
const gtaColor gtaOldLace = { 253, 245, 230, 255 };
const gtaColor gtaFloralWhite = { 255, 250, 240, 255 };
const gtaColor gtaIvory = { 255, 255, 240, 255 };
const gtaColor gtaAntiqueWhite = { 250, 235, 215, 255 };
const gtaColor gtaLinen = { 250, 240, 230, 255 };
const gtaColor gtaLavenderBlush = { 255, 240, 245, 255 };
const gtaColor gtaMistyRose = { 255, 228, 225, 255 };
const gtaColor gtaGainsboro = { 220, 220, 220, 255 };
const gtaColor gtaLightGrey = { 211, 211, 211, 255 };
const gtaColor gtaSilver = { 192, 192, 192, 255 };
const gtaColor gtaDarkGray = { 169, 169, 169, 255 };
const gtaColor gtaGray = { 128, 128, 128, 255 };
const gtaColor gtaDimGray = { 105, 105, 105, 255 };
const gtaColor gtaLightSlateGray = { 119, 136, 153, 255 };
const gtaColor gtaSlateGray = { 112, 128, 144, 255 };
const gtaColor gtaDarkSlateGray = { 47,  79,  79, 255 };
const gtaColor gtaBlack = { 0,   0,   0, 255 };
const gtaColor gtaTransparent = { 0,   0,   0, 0 };
