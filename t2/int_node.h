#ifndef INT_NODE_H
#define INT_NODE_H

#include "expr_node.h"
#include "expr.h"
#include <iostream>
using namespace std;

class Int_node : public Expr_node // 整数表达式
{
	friend class Expr;
	
private:
	Int_node(int k);
	
	int n;
	
	virtual void print(ostream& o) const;
	virtual int eval() const;
};

#endif // INT_NODE_H
