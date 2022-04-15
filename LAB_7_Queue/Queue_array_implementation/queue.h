#pragma once

#include <iostream>

#ifndef _QUEUE_H_
#define _QUEUE_H_

const int DIM = 10;
typedef int Atom;

struct Queue {
	int head, tail;
	Atom vect[DIM];
};

int nextPoz(int index);
void initQueue(Queue &Q);
bool isEmpty(const Queue &Q);
bool isFull(const Queue &Q);
void put(Queue &Q, Atom a);
Atom get(Queue &Q);
Atom front(const Queue &Q);

#endif