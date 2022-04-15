#include <iostream>
#include "queue.h"

int main() {
	Queue coada;
	initQueue(coada);

	for (int i = 0; i < 30; i++) {
		put(coada, i * 2);
	}

	//printQueue(coada);

	return 0;
}