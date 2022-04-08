#include <iostream>
#include <string>
#include "stiva.h"

int main() {
	
	LinkedStack stiva;
	initStack(stiva);

	for (int i = 0; i < 10; i++) {
		push(stiva, i*2);
	}

	printStack(stiva);
	pop(stiva);

	printStack(stiva);

	return 0;
}