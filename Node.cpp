#include "Node.h"

Node::Node():Node("N",false)
{
}

Node::~Node()
{
}

Node::Node(const string name):Node(name,false)
{
}

Node::Node(const string name, const bool value):m_name(name),m_value(value)
{
}

void Node::setName(const string name)
{
    this->m_name = name;
}

string Node::getName()
{
    return this->m_name;
}

void Node::setValue(bool value)
{
    this->m_value = value;
}

bool Node::getValue()
{
    return this->m_value;
}

bool Node::AND(const Node &node)
{
    return (this->m_value & node.m_value);
}

bool Node::OR(const Node &node)
{
    return (this->m_value | node.m_value);
}

bool Node::XOR(const Node &node)
{
    return (this->m_value ^ node.m_value);
}

bool Node::NAND(const Node &node)
{
    return (!(this->m_value && node.m_value));
}

bool Node::NOR(const Node &node)
{
    return (!(this->m_value | node.m_value));
}

bool Node::XNOR(const Node &node)
{
    return ((this->m_value ^ node.m_value));
}

bool Node::NOT()
{
    return (!this->m_value);
}

ostream &operator<<(ostream &out, const Node &node)
{
    out<<node.m_name<<": "<<node.m_value<<"\n";
	return out;
}
