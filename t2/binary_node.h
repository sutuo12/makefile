#ifndef BINARY_NODE_H
#define BINARY_NODE_H

#include "expr_node.h"
#include "expr.h"
#include <iostream>
using namespace std;

class Binary_node : public Expr_node // 二元表达式
{
	friend class Expr;
	
private:
	Binary_node(char a, Expr b, Expr c);
	
	char op; // +-*/=<>
	Expr left;
	Expr right;
	
	virtual void print(ostream& o) const;
	virtual int eval() const;
};

#endif // BINARY_NODE_H

