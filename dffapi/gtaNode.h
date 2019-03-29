/***************************************************/
/* dffapi 2.0
/* https://github.com/DK22Pac/dffapi
/***************************************************/
#pragma once
#include "gtaPropertied.h"
#include "gtaMatrix.h"

class gtaNode : public gtaPropertied {
private:
    gtaString mName;
    gtaMatrix mTransform;
    gtaNode *mParent = nullptr;
    // anim info
public:
    gtaNode();
    gtaNode(gtaMatrix const &transform, gtaNode *parent = nullptr, gtaString name = gtaString());
    gtaNode(gtaString name, gtaMatrix const &transform, gtaNode *parent = nullptr);
    void set(gtaMatrix const &transform, gtaNode *parent = nullptr, gtaString name = gtaString());
    void set(gtaString name, gtaMatrix const &transform, gtaNode *parent = nullptr);
    void set(gtaNode const &node);
};
