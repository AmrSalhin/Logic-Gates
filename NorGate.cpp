#include "NorGate.h"
#include "Node.h"

NorGate::NorGate()
{
}

NorGate::NorGate(Node *n1, Node* n2, Node* o):Gate(n1,n2,o)
{
}

void NorGate::simulateGate()
{
    bool value = firstNode->NOR(*(secondNode));
    outputNode->setValue(value);
}

NorGate::~NorGate()
{
}
