#ifndef NOT_H
#define NOT_H

#include "Gate.h"

class Node;


class NotGate : public Gate
{
private:
    /* data */
public:
    NotGate();
    NotGate(Node* n1, Node* o);

    void simulateGate();

    ~NotGate();
};




#endif