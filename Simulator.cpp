#include "Simulator.h"

Simulator::Simulator()
{
}

Simulator::~Simulator()
{
    // delete the dynamic allocated gates
	for (uint32_t i=0; i<gateContainer.size(); i++)
	{
		if (gateContainer[i] != nullptr)
				delete gateContainer[i];
	}

	for (uint32_t i=0; i<nodeContainer.size(); i++)
	{
		if (nodeContainer[i] != nullptr)
			delete nodeContainer[i];
	}
}

Simulator &Simulator::getInstance()
{
    static Simulator singeltonObject;
    return singeltonObject;
}

void Simulator::PostGate(Gate* gate)
{
    if(gate != nullptr)
    gateContainer.push_back(gate);
}

void Simulator::postNode(Node* node)
{
    if(node != nullptr)
    nodeContainer.push_back(node);
}

Node* Simulator::FindNode(const string& nodeName)
{
    Node* node = nullptr;

    for (int i = 0; i < nodeContainer.size(); i++)
    {
        if(nodeContainer[i]->getName() == nodeName)
        {
            node = nodeContainer[i];
            break;
        }
    }
    
    return node;
}

void Simulator::printAllNodes() {

	for (uint32_t i=0; i<nodeContainer.size(); i++)
	{
		if (nodeContainer[i] != nullptr)
			cout<<*(nodeContainer[i]);
	}
}

void Simulator::printAllGates()
{
	cout<<"size gates array: "<<gateContainer.size()<<"\n";

	for (uint32_t i=0; i<gateContainer.size(); i++)
	{
		cout<<"Gate node1:"<<gateContainer[i]->getFiristNode()<<"\n";
		cout<<"Gate node2:"<<gateContainer[i]->getSecondNode()<<"\n";
		cout<<"Gate node3:"<<gateContainer[i]->getOutput()<<"\n";

	}

}

void Simulator::startSimulate()
{
    for (int i = 0; i < gateContainer.size(); i++)
    {
        gateContainer[i]->simulateGate();
    }
    
}
