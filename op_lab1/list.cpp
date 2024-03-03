#include "list.h"
#include <iostream>

List::List() {
	data = NULL;
	next = NULL;
	prev = NULL;
}

List::~List() {
	if (next != NULL) {
		delete next;
	}
	std::cout << "Deleting " << data << std::endl;
}

void List::append(FiguraPlaska* f) {
	if (next == NULL) {
		next = new List();
		next->prev = this;
		next->data = f;
	}
	else {
		next->append(f);
	}
}

void List::pop(FiguraPlaska* f) {
	if (data == f) {
		if (prev != NULL) {
			prev->next = next;
			next->prev = prev;
			delete this;
		}
		else {
			if (next != NULL) {
				data = next->data;
				next = next->next;
				delete next;
			}
			else {
				data = NULL;
			}
		}
	}
	else {
		if (next != NULL) {
			next->pop(f);
		}
	}
}
