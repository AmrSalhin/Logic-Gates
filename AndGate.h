#ifndef AND_H
#define AND_H

#include "Gate.h"


class AndGate : public Gate
{
private:
    /* data */
public:
    AndGate();
    AndGate(Node *n1, Node *n2, Node *n3);
    void simulateGate();
    ~AndGate();
};




#endif


