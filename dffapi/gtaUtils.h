/***************************************************/
/* dffapi 2.0
/* https://github.com/DK22Pac/dffapi
/***************************************************/
#pragma once
#include "gtaTypes.h"

struct gtaUtils {
private:
    template<typename T> static T const &formatterArg(T const &arg) { return arg; }
    static gtaChar const *formatterArg(gtaString const &arg);
    static gtaChar const *formatterArg(gtaPath const &arg);
public:
    template<typename ...ArgTypes>
    static gtaString format(gtaString const &format, ArgTypes... args) {
        static gtaChar buf[4096];
        snprintf(buf, 4096, format.c_str(), formatterArg(args)...);
        return buf;
    }
};
