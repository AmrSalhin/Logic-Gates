#ifndef OR_H
#define OR_H

#include "Gate.h"


class OrGate : public Gate
{
private:
    /* data */
public:
    OrGate();
    OrGate(Node* n1,Node* n2,Node* o);

    void simulateGate();
    
    ~OrGate();
};




#endif