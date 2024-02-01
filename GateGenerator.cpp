#include "GateGenerator.h"

GateGenerator::GateGenerator():baseGate(nullptr),simulator(Simulator::getInstance())
{
}

void GateGenerator::loadFile(const string &fileName)
{
    file.open(fileName);

	// loop through each file line

	while(! file.eof())
	{
		string operation;
		file>>operation;

		if (operation == "SET")
		{
			string nodeName;
			bool nodeValue;
			file>>nodeName>>nodeValue;

			Node* node = createOrFindNode(nodeName);
			node->setValue(nodeValue);
		}

		else if (operation == "SIM")
			simulator.startSimulate();

		else if (operation == "OUT")
		{
			string name;
			file>>name;
			if (name == "ALL")
				simulator.printAllNodes();

			else
			{
				Node *node = simulator.FindNode(name);
				if (node != nullptr)
					cout<<*(node);
				else
					cout<<"The node "<<name<<" doesn't exist\n";
			}

		}

		else
		{
			string name1, name2, name3;
			Node* node1 = nullptr;
			Node* node2=nullptr;
			Node* node3=nullptr;

			if (operation == "NOT")
			{
				file>>name1>>name2;
				node1 = createOrFindNode(name1);
				node2 = createOrFindNode(name2);
			}

			else
			{
				file>>name1>>name2>>name3;
				node1 = createOrFindNode(name1);
				node2 = createOrFindNode(name2);
				node3 = createOrFindNode(name3);
			}

			baseGate = creatGate(operation, node1, node2, node3);

			if (baseGate != nullptr)
				simulator.PostGate(baseGate);
		}
	}

	file.close();
}

GateGenerator::~GateGenerator()
{
}
