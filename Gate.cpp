#include "Gate.h"
#include"Node.h"

Gate::Gate():Gate(nullptr,nullptr,nullptr)
{
}

Gate::Gate(Node *input1, Node *input2, Node *output):firstNode(input1),secondNode(input2),outputNode(output)
{
}


Gate::~Gate()
{
}

Node *Gate::getFiristNode()
{
    return firstNode;
}

Node *Gate::getSecondNode()
{
    return secondNode;
}

Node *Gate::getOutput()
{
    return outputNode;
}

void Gate::setFiristNode(Node *&node)
{
    firstNode = node;
}

void Gate::setSecondNode(Node *&node)
{
    secondNode = node;
}

void Gate::setOutput(Node *&node)
{
    outputNode = node;
}

