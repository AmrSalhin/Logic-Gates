#include "NandGate.h"
#include"Node.h"

NandGate::NandGate():Gate()
{
}

NandGate::NandGate(Node *n1, Node* n2, Node* o):Gate(n1,n2,o)
{
}

void NandGate::simulateGate()
{
    bool value = firstNode->NAND(*(secondNode));
    outputNode->setValue(value);
}

NandGate::~NandGate()
{
}
