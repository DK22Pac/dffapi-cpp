/***************************************************/
/* dffapi 2.0
/* https://github.com/DK22Pac/dffapi
/***************************************************/
#include "gtaException.h"

gtaException::gtaException(gtaString const &message) : mMessage(message) {}

char const *gtaException::what() const noexcept {
    return mMessage.c_str();
}
