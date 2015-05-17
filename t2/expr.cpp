#include "expr.h"
#include "expr_node.h"
#include "int_node.h"
#include "unary_node.h"
#include "binary_node.h"
#include "ternary_node.h"

ostream& operator << (ostream& o, const Expr& t)
{ 
	t.p->print(o); 
	return o; 
}

Expr::Expr(int n) 
{ 
	p = new Int_node(n); 
}

Expr::Expr(char op, Expr t) 
{ 
	p = new Unary_node(op, t); 
}

Expr::Expr(char op, Expr left, Expr right) 
{ 
	p = new Binary_node(op, left, right); 
}

Expr::Expr(char op, Expr left, Expr middle, Expr right)
{
	p = new Ternary_node(op, left, middle, right);
}

Expr::Expr(const Expr& t) 
{ 
	p = t.p;
	++p->use; // 新建对象时增加计数
}

Expr::~Expr() 
{ 
	if (--p->use == 0) // 计数为零时才销毁
		delete p;	
}

Expr& Expr::operator=(const Expr& rhs) 
{
	rhs.p->use++;
	if (--p->use == 0) 
		delete p; 	
	p = rhs.p;
	return *this;
}

int Expr::eval() const
{
	return p->eval();
}
