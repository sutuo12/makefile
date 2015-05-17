objects = main.o binry_node.o expr_node.o expr.o int_node.o ternary_node.o unary_node.o

main.exe: $(objects)
	g++  -o main.exe $(objects)

main.o: main.cpp expr.h
	g++  -c main.cpp

binary_node.o: binary_node.cpp binary_node.h expr_node.h expr.h
	g++  -c binary_node.cpp
expr_node.o: expr_node.cpp expr_node.h expr.h
	g++ -c expr.cpp 

expr.o:  expr.cpp expr.h expr_node.h int_node.h unary_node.h binary_node.h \
  ternary_node.h	
	g++ -c expr.cpp expr.h
int_node.o: int_node.cpp int_node.h expr_node.h expr.h
	g++ -c int_node.cpp

ternary_node.o: ternary_node.cpp ternary_node.h expr_node.h expr.h
	g++ -c ternary_node.cpp
unary_node.o: unary_node.cpp unary_node.h expr_node.h expr.h
	g++ -c unary_node.cpp
.PHONY: clean
clean:
	-rm main.exe $(objects)
