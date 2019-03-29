/***************************************************/
/* dffapi 2.0
/* https://github.com/DK22Pac/dffapi
/***************************************************/
#include "gtaPropertied.h"

gtaBool gtaPropertied::hasProperty(gtaString const & name) {
    return mProperties.find(name) != mProperties.end();
}

void gtaPropertied::removeProperties() {
    mProperties.clear();
}
