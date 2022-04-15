#include "linkedQueue.h"

void initQueue(LinkedQueue& Q)
{
	Q.head = NULL;
	Q.tail = NULL;
}

bool isEmpty(const LinkedQueue& Q)
{
	return Q.head == NULL;
}

Atom get(LinkedQueue& Q)
{
	Atom aux = -1;
	if (!isEmpty(Q)) {
		Atom aux = Q.head->data;
		Element* p = Q.head;
		Q.head = Q.head->link;
		delete p;
	}else {
		std::cout << "Queue is EMPTY";
	}

	return aux;
}

Atom front(const LinkedQueue& Q)
{
	return Atom();
}

void put(LinkedQueue& Q, Atom a)
{
	Element* x = new Element;
	x->data = a;
	x->link = NULL;

	if (!isEmpty(Q)){
		Q.tail->link = x;
		Q.tail = Q.tail->link;
	}
	else {
		Q.head = x;
		Q.tail = x;
	}
}

void printQueue(const LinkedQueue& Q)
{
	Element* p = Q.head;

	while (p) {
		std::cout << p->data << " ";
		p = p->link;
	}

	std::cout << std::endl;
}


