#include "AndGate.h"

AndGate::AndGate():Gate()
{
}
AndGate::AndGate(Node* n1, Node* n2, Node* o): Gate(n1, n2, o)
{
    
}

void AndGate::simulateGate()
{
    bool value = firstNode->AND(*(secondNode));
    outputNode->setValue(value);
}


AndGate::~AndGate()
{
}
