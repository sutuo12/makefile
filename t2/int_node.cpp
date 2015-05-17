#include "int_node.h"

Int_node::Int_node(int k) : n(k)
{
	
}

int Int_node::eval() const
{
	return n;
}

void Int_node::print(std::ostream &o) const
{
	o << n;
}
