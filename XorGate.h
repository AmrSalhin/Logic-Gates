#ifndef XOR_H
#define XOR_H

#include "Gate.h"


class XorGate : public Gate
{
private:
    /* data */
public:
    XorGate();
    XorGate(Node* n1, Node* n2, Node* o);

    void simulateGate();
    
    ~XorGate();
};




#endif