#ifndef GATEGENERATOR_H
#define GATEGENERATOR_H

#include "Node.h"
#include "Gate.h"
#include "AndGate.h"
#include "OrGate.h"
#include "XorGate.h"
#include "NandGate.h"
#include "NorGate.h"
#include "XnorGate.h"
#include "NotGate.h"
#include "Simulator.h"
#include <assert.h>
#include <fstream>

using namespace std;

class GateGenerator
{
private:
    Gate* baseGate;
	Simulator& simulator;
	ifstream file;

    Gate* creatGate(const string& gateName,Node* node1,Node* node2,Node* node3)
    {
    Gate* gate = nullptr;
    if(gateName == "AND")
    {
        gate = new AndGate(node1 , node2 ,node3);
    }
    else if(gateName == "OR")
    {
        gate = new OrGate(node1 , node2 ,node3);
    }
    else if(gateName == "XOR")
    {
        gate = new XorGate(node1 , node2 ,node3);
    }
    else if(gateName == "NAND")
    {
        gate = new NandGate(node1 , node2 ,node3);
    }
    else if(gateName == "NOR")
    {
        gate = new NorGate(node1,node2,node3);
    }
    else if(gateName == "XNOR")
    {
       gate = new XnorGate(node1,node2,node3); 
    }
    else if(gateName == "NOT")
    {
        gate = new NotGate(node1,node2);
    }
    else
    {

    }
    return gate;
}
    
Node* createOrFindNode(const string& name) {
		Node *node = simulator.FindNode(name);

		// First time to create the node and post it to the simulator
		if (node == nullptr)
		{
			node = new Node(name);
			simulator.postNode(node);
		}

		return node;
	}
public:
    GateGenerator();
    void loadFile(const string& fileName);
    ~GateGenerator();
};


#endif