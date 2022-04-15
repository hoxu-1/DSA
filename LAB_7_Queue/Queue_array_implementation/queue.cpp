#include "queue.h"

int nextPoz(int index)
{
	if (index < DIM - 1) return index + 1;
	else return 0;
}

void initQueue(Queue &Q)
{
	Q.head = 0;
	Q.tail = 0;
}

bool isEmpty(const Queue &Q)
{
	return Q.head == Q.tail;
}

bool isFull(const Queue &Q)
{
	return nextPoz(Q.tail) == Q.head;
}

void put(Queue &Q, Atom a)
{
	if (!isFull(Q)) {
		Q.vect[Q.tail] = a;
		Q.tail = nextPoz(Q.tail);
	}else {
		std::cout << "Queue is full, can't add elements\n";
	}
}

Atom get(Queue& Q)
{
	if (!isEmpty(Q)) {
		int aux = Q.head;
		Q.head = nextPoz(Q.head);
		return Q.vect[aux];
	}else {
		std::cout << "Queue is Empty, can't delete elements";
	}
}

Atom front(const Queue& Q)
{
	return Atom();
}

void printQueue(const Queue& Q)
{
	int i = Q.head;
	
	while (i != Q.tail) {
		std::cout << Q.vect[i] << " ";
		i++;
		i = i % (DIM - 1);
	}

	std::cout << std::endl;
}
