/***************************************************/
/* dffapi 2.0
/* https://github.com/DK22Pac/dffapi
/***************************************************/
#pragma once
#include "gtaTypes.h"

class gtaException : public std::exception {
    gtaString mMessage;
public:
    gtaException(gtaString const &message);
    gtaChar const *what() const noexcept override;
};
