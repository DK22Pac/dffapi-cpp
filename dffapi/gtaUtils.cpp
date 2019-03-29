/***************************************************/
/* dffapi 2.0
/* https://github.com/DK22Pac/dffapi
/***************************************************/
#include "gtaUtils.h"

gtaChar const *gtaUtils::formatterArg(gtaString const & arg) {
    return arg.c_str();
}

gtaChar const *gtaUtils::formatterArg(gtaPath const & arg) {
    return arg.string().c_str();
}
