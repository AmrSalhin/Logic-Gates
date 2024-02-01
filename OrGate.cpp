#include "OrGate.h"

OrGate::OrGate():Gate()
{
}

OrGate::OrGate(Node *n1, Node *n2, Node *o):Gate(n1,n2,o)
{
}

void OrGate::simulateGate()
{
    bool value = firstNode->OR(*(secondNode));
    outputNode->setValue(value); 
}

OrGate::~OrGate()
{
}
