/***************************************************/
/* dffapi 2.0
/* https://github.com/DK22Pac/dffapi
/***************************************************/
#include "gtaNode.h"

gtaNode::gtaNode() {}

gtaNode::gtaNode(gtaMatrix const & transform, gtaNode * parent, gtaString name) {
    mTransform = transform;
    mParent = parent;
    mName = name;
}

gtaNode::gtaNode(gtaString name, gtaMatrix const & transform, gtaNode * parent) {
    mTransform = transform;
    mParent = parent;
    mName = name;
}

void gtaNode::set(gtaMatrix const & transform, gtaNode * parent, gtaString name) {
    mTransform = transform;
    mParent = parent;
    mName = name;
}

void gtaNode::set(gtaString name, gtaMatrix const & transform, gtaNode * parent) {
    set(transform, parent, name);
}

void gtaNode::set(gtaNode const & node) {
    set(node.mTransform, node.mParent, node.mName);
}
