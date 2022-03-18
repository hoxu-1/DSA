#pragma once
#ifndef _DUBLE_LIST_
#define _DUBLE_LIST_

#include <iostream>

struct Element {
	int data;
	Element* next;
	Element* prev;
};

void insert_front(Element*& head, int val);
void create_list(Element*& head, int n);
void print_list(Element* head);
//void inserare_interior(Element* cap, int val, int poz);
//void insert_last(Element*& head, int val); 
//void delete_first(Element*& head);
//void delete_interior(Element *&head, int poz);
void delete_last(Element*& head);

#endif // !_DUBLE_LIST_
