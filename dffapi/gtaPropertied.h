/***************************************************/
/* dffapi 2.0
/* https://github.com/DK22Pac/dffapi
/***************************************************/
#pragma once
#include "gtaTypes.h"

class gtaPropertied {
private:
    gtaMap<gtaString, gtaAny> mProperties;
public:
    gtaBool hasProperty(gtaString const &name);
    void removeProperties();

    template <typename T>
    T getProperty(gtaString const &name, T const &defaultValue = T()) {
        auto it = mProperties.find(name);
        if (it != mProperties.end()) {
            try {
                return std::any_cast<T>((*it).second);
            }
            catch (...) {
                return defaultValue;
            }
        }
        return defaultValue;
    }

    template <typename T>
    void setProperty(gtaString const &name, T value) {
        mProperties[name] = value;
    }
};
