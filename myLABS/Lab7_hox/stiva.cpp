#include "stiva.h"

void initStack(Stack& S)
{
	S.sp = -1;
}

bool isEmpty(Stack& S)
{
	return (S.sp == -1);
}

bool isFull(Stack& S)
{
	return (S.sp == DIM - 1);
}

void push(Stack& S, Atom a)
{
	if(!isFull(S)){
		S.sp++;
		S.vect[S.sp] = a;
	}
}

Atom pop(Stack& S)
{
	Atom Last = S.vect[S.sp];
	S.sp--;
	return Last;
}

Atom top(const Stack& S)
{
	return S.vect[S.sp];
}

void printStack(Stack S)
{
	int i = S.sp;
	while (i > -1) {
		std::cout << "S[" << i << "]=" << S.vect[i] << std::endl;
		i--;
	}
}
