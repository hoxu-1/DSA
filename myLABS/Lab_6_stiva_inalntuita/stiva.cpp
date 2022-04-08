#include "stiva.h"

void initStack(LinkedStack& LS)
{
	LS = NULL;
}

bool isEmpty(const LinkedStack& LS)
{
	return LS == NULL;
}

void push(LinkedStack& LS, Atom a)
{
	Element* x = new Element;
	x->data = a;
	x->link = LS;
	LS = x;
}

Atom pop(LinkedStack& LS)
{
	Element* Aux = LS->link;
	Atom someData = Aux->data;

	LS->link = Aux->link;
	delete Aux;

	return someData;
}

Atom top(const LinkedStack& LS)
{
	return LS->link->data;
}

void printStack(const LinkedStack& LS)
{
	Element* q = LS->link;

	while (q->link != NULL) {
		std::cout << q->data << " , ";
		q = q->link;
	}

	std::cout << "\n";
}
