#pragma once

#include <iostream>

#ifndef _STIVA_H_
#define _STIVA_H_

typedef int Atom;
const int DIM = 100;

struct Stack {
	int sp;
	Atom vect[DIM];
};

void initStack(Stack& S);
bool isEmpty(Stack& S);
bool isFull(Stack& S);
void push(Stack& S, Atom a);
Atom pop(Stack& S);
Atom top(const Stack& S);
void printStack(Stack S);

#endif