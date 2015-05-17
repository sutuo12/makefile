#ifndef TERNARY_NODE_H
#define TERNARY_NODE_H

#include "expr_node.h"
#include "expr.h"
#include <iostream>

class Ternary_node : public Expr_node // 三元表达式
{
	friend class Expr;
	
private:
	Ternary_node(char o, Expr a, Expr b, Expr c);
	
	char op; // ?
	Expr left;
	Expr middle;
	Expr right;
	
	virtual void print(ostream& o) const;
	virtual int eval() const;
};

#endif // TERNARY_NODE_H
