#include <iostream>
#include "duble_list.h"

int main() {

	Element* cap = 0;

	create_list(cap, 10);
	
	//inserare_interior(cap, 314, 5);
	delete_last(cap);
	delete_last(cap);

	print_list(cap);

	return 0;
}