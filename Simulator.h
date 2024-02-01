#ifndef SIMULATOR_H
#define SIMULATOR_H

#include <vector>
#include<string>
#include "Node.h"
#include "Gate.h"

class Simulator
{
private:
    std::vector<Gate*> gateContainer;
    std::vector<Node*> nodeContainer;
    Simulator();
    Simulator(const Simulator& s) = delete;
    Simulator& operator = (const Simulator& s) = delete;
public:
    
    static Simulator& getInstance();

    void PostGate(Gate* gate);
    void postNode(Node* node);
    Node* FindNode(const string& nodeName);
    void printAllNodes();
    void printAllGates();
    void startSimulate();

    ~Simulator();
    
};

#endif