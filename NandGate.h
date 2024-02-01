#ifndef NAND_H
#define NAND_H

#include "Gate.h"



class NandGate : public Gate
{
private:
    /* data */
public:
    NandGate();
    NandGate(Node* n1, Node* n2, Node* o);
    
    void simulateGate();

    ~NandGate();
};




#endif