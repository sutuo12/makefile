#include "expr.h"
#include <iostream>
using namespace std;

int main() {
	Expr t = Expr('*', Expr('-', 5), Expr('+', 3, 4));
	cout << t << " = " << t.eval() << endl;
	// ((-5)*(3+4)) = -35
	
	t = Expr('*', t, t);
	cout << t << " = " << t.eval() << endl;
	// (((-5)*(3+4))*((-5)*(3+4))) = 1225
	
	Expr q = Expr('?', Expr('<', 1, 2), t, Expr('*', 3, 7));
	cout << q << " = " << q.eval() << endl;
	// ((1<2)?(((-5)*(3+4))*((-5)*(3+4))):(3*7)) = 1225
	
	q = Expr('?', Expr('>', 1, 2), t, Expr('*', 3, 7));
	cout << q << " = " << q.eval() << endl;
	// ((1>2)?(((-5)*(3+4))*((-5)*(3+4))):(3*7)) = 21
	
	return 0;
}

