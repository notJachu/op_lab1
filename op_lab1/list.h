#pragma once#

#include "figuraPlaska.h"

class List {
private:
	FiguraPlaska* data;
	List* next;
	List* prev;
public:
	List();
	~List();
	void append(FiguraPlaska* f);
	void pop(FiguraPlaska* f);
};
