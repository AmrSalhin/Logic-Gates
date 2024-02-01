#include "NotGate.h"
#include "Node.h"

NotGate::NotGate()
{
}

NotGate::NotGate(Node *n1, Node* o):Gate(n1,nullptr,o)
{
}

void NotGate::simulateGate()
{
    bool value = firstNode->NOT();
    outputNode->setValue(value);
}

NotGate::~NotGate()
{
}
