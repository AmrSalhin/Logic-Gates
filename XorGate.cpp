#include "XorGate.h"

XorGate::XorGate()
{
}

XorGate::XorGate(Node *n1, Node *n2, Node *o):Gate(n1,n2,o)
{
}

void XorGate::simulateGate()
{
    bool value = firstNode->XOR(*(secondNode));
    outputNode->setValue(value);
}

XorGate::~XorGate()
{
}
