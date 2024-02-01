#include "XnorGate.h"


XnorGate::XnorGate()
{
}

XnorGate::XnorGate(Node *n1, Node *n2, Node *o):Gate(n1,n2,o)
{
}

void XnorGate::simulateGate()
{
    bool value = firstNode->XNOR(*(secondNode));
    outputNode->setValue(value); 
}

XnorGate::~XnorGate()
{
}
