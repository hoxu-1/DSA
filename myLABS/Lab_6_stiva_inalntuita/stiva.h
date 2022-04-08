#pragma once

#include <iostream>

#ifndef _LINKED_STACK_H_
#define _LINKED_STACK_H_

typedef char Atom;

struct Element {
	Atom data;
	Element* link;
};

typedef Element* LinkedStack;

void initStack(LinkedStack& LS);
bool isEmpty(const LinkedStack& LS);
void push(LinkedStack& LS, Atom a);
Atom pop(LinkedStack& LS);
Atom top(const LinkedStack& LS);
void printStack(const LinkedStack& LS);

#endif // !1
