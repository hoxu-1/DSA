#include <iostream>
#include "stiva.h"

int main() {
	Stack stiv;
	initStack(stiv);

	int i = 1;

	while (!isFull(stiv)) {
		push(stiv, i);
		i = i + 2;
	}

	printStack(stiv);
	return 0;
}