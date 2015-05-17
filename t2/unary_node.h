#ifndef UNARY_NODE_H
#define UNARY_NODE_H

#include "expr_node.h"
#include "expr.h"
#include <iostream>
using namespace std;

class Unary_node : public Expr_node // 一元表达式
{
	friend class Expr;
	
private:
	Unary_node(char a, Expr b);
	
	char op; // +-
	Expr opnd;
	
	virtual void print(ostream& o) const;
	virtual int eval() const;
};

#endif // UNARY_NODE_H

