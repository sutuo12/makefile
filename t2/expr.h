#ifndef EXPR_H
#define EXPR_H

#include <iostream>
using namespace std;

class Expr_node;

class Expr
{
	friend ostream& operator << (ostream&, const Expr&);
	
public:
	Expr(int);              // Create Int_node
	Expr(char, Expr);       // Create Unary_node
	Expr(char, Expr, Expr); // Create Binary_node
	Expr(char, Expr, Expr, Expr); // Create Ternary_node
	Expr(const Expr&);      // 拷贝构造函数！
	~Expr();                // 析构函数
	
	Expr& operator=(const Expr&); // 赋值函数
	
	int eval() const; // 计算函数
	
private:
	Expr_node* p; // Int_ or Unary_ or Binary_node
};

#endif // EXPR_H
