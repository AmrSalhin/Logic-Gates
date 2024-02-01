#ifndef XNOR_H
#define XNOR_H

#include "Gate.h"


class XnorGate : public Gate
{
private:
    /* data */
public:
    XnorGate();
    XnorGate(Node* n1, Node* n2, Node* o);

    void simulateGate();
    
    ~XnorGate();
};




#endif