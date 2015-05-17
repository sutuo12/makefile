#ifndef EXPR_NODE_H
#define EXPR_NODE_H

#include <iostream>
using namespace std;

class Expr;

class Expr_node
{
	friend ostream& operator << (ostream&, const Expr&);
	
	// 设Expr成友元类，是因Expr要访问计数器use
	friend class Expr;
	
public:
	Expr_node();
	virtual ~Expr_node();
	
	virtual void print(ostream&) const = 0; // 输出表达式
	virtual int eval() const = 0; // 计算表达式的值
	
private:
	// 使用此变量对引用进行计数统计
	int use; 
};

#endif // EXPR_NODE_H
