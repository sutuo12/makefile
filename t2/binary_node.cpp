#include "binary_node.h"

Binary_node::Binary_node(char a, Expr b, Expr c)
	: op(a), left(b), right(c)
{
	
}

void Binary_node::print(ostream &o) const
{
	o << "(" << left << op << right << ")"; 
}

int Binary_node::eval() const
{
	int value;
	int l = left.eval();
	int r = right.eval();
	switch (op) {
		case '+':
			value = l + r;
			break;
		case '-':
			value = l - r;
			break;
		case '*':
			value = l * r;
			break;
		case '/':
			value = l / r;
			break;
		case '=':
			value = (l == r);
			break;
		case '<':
			value = (l < r);
			break;
		case '>':
			value = (l > r);
			break;
		default:
			break;
	}
	return value;
}
