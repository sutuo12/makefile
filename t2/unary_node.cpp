#include "unary_node.h"

Unary_node::Unary_node(char a, Expr b)
	: op(a), opnd(b)
{
	
}

int Unary_node::eval() const
{
	int value;
	int a = opnd.eval();
	switch (op) {
		case '+':
			value = a;
			break;
		case '-':
			value = -a;
			break;
		default:
			break;
	}
	return value;
}

void Unary_node::print(std::ostream &o) const
{
	o << "(" << op << opnd << ")";
}
