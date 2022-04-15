#include <iostream>
#include "linkedQueue.h"

int main() {
	LinkedQueue coada;
	initQueue(coada);

	for (int i = 0; i < 20; i++) {
		put(coada, i*i);
	}

	get(coada);

	printQueue(coada);

	return 0;
}