/***************************************************/
/* dffapi 2.0
/* https://github.com/DK22Pac/dffapi
/***************************************************/
#include "gtaPropertied.h"

bool gtaPropertied::hasProperty(gtaString const & name) {
	return mProperties.find(name) != mProperties.end();
}

void gtaPropertied::clearProperties() {
	mProperties.clear();
}
