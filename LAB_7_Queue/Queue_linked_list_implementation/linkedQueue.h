#pragma once

#include <iostream>

#ifndef _LINKEDQUEUE_H_
#define _LINKEDQUEUE_H_

typedef int Atom;

struct Element {
	Atom data;
	Element* link;
};

struct LinkedQueue {
	Element* head;
	Element* tail;
};

void initQueue(LinkedQueue &Q);
bool isEmpty(const LinkedQueue& Q);
Atom get(LinkedQueue& Q);
Atom front(const LinkedQueue &Q);
void put(LinkedQueue &Q, Atom a);
void printQueue(const LinkedQueue& Q);

#endif // !_LINKEDQUEUE_H_

