#include "duble_list.h"

void insert_front(Element*& head, int val)
{
	Element* new_elem = new Element;

	new_elem->data = val;
	new_elem->prev = 0;
	new_elem->next = head;
	
	// Pt cazul cand lista intitala este vida este necesara o verificare (head has no previous element)
	if (head != 0) {
		head->prev = new_elem;
	}

	head = new_elem;
}

void create_list(Element*& head, int n)
{
	int val = 0;
	
	for (int i = 0; i < n; i++) {
		std::cout << "Element[" << i << "] = ";

		std::cin >> val;

		insert_front(head, val);

	}
}

void print_list(Element* head)
{
	Element* p = head;

	while (p != 0) {
		std::cout << p->data <<  " , ";

		p = p->next;
	}
}
//
//void inserare_interior(Element* cap, int val, int poz)
//{
//	Element* p = cap;
//	int i = 0;
//
//	while(i != poz - 1 && p){
//		p = p->next;
//		i++;
//	}
//
//	Element* new_elem = new Element;
//
//	new_elem->data = val;
//	new_elem->next = p->next; // Atentie "Dereferencing NULL pointer" 
//	new_elem->prev = p;
//
//	p->next = new_elem;
//}
//
//void insert_last(Element*& head, int val)
//{
//	Element* q = head;
//
//	while (q) {
//		q = q->next;
//	}
//	
//	Element* p = new Element;
//	p->data = val;
//
//	q->next = p;
//	p->prev = q;
//	p->next = 0;
//}
//
//void delete_first(Element*& head)
//{
//	Element* p = head;
//	head = head->next;
//	head->prev = 0;
//	delete p;
//}
//
//void delete_interior(Element*& head, int poz)
//{
//	Element* q = head;
//	int i = 0;
//
//	while (i != poz-1 && q) {
//		q = q->next;
//		i++;
//	}
//
//	Element* p = q->next;
//	q->next;
//
//}

void delete_last(Element*& head)
{
	Element* p = head;
	while (p->next->next) {
		p = p->next;
	}

	delete p->next;
	p->next = 0;
}
