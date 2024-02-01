#ifndef NODE_H
#define NODE_H

#include<iostream>
#include<string>
using namespace std;

class Node
{
private:
    string m_name;
    bool m_value;
public:
Node();
~Node();
Node(const string name);
Node(const string name, const bool value);
void setName(const string name);
string getName();
void setValue(bool value);
bool getValue();
friend ostream& operator << (ostream& out, const Node& node);
bool AND(const Node& node);
bool OR(const Node& node);
bool XOR(const Node& node);
bool NAND(const Node& node);
bool NOR(const Node& node);
bool XNOR(const Node& node);
bool NOT();
};

#endif
