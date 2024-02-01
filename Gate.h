#ifndef GATE_H
#define GATE_H
#include<string>
#include "Node.h"
using namespace std;

class Node;


class Gate
{
protected:
Node* firstNode;
Node* secondNode;
Node* outputNode;

public:
Gate();
Gate(Node* input1, Node* input2, Node* output);
~Gate();

Node* getFiristNode();
Node* getSecondNode();
Node* getOutput();

void setFiristNode(Node*& node);
void setSecondNode(Node*& node);
void setOutput(Node*& node);

virtual void simulateGate() = 0;
};

#endif
