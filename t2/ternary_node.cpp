#include "ternary_node.h"

Ternary_node::Ternary_node(char o, Expr a, Expr b, Expr c)
	: op(o), left(a), middle(b), right(c)
{
	
}

void Ternary_node::print(ostream &o) const
{
	if (op == '?')
		o << "(" << left << "?" << middle << ":" << right << ")";
}

int Ternary_node::eval() const
{
	if (op == '?')
		return left.eval() ? middle.eval() : right.eval();
	return 0;
}

