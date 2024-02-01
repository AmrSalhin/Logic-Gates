#ifndef NOR_H
#define NOR_H

#include "Gate.h"

class NorGate : public Gate
{
private:
    /* data */
public:
    NorGate();
    NorGate(Node* n1, Node* n2, Node* o);

    void simulateGate();

    ~NorGate();
};




#endif