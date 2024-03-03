#include <iostream>

#include "trojkat.h"
#include "figuraPlaska.h"
#include "prostokat.h"
#include "kolo.h"


using namespace std;

int main() {
	Prostokat p1(2, 3);
	Prostokat p2(4, 5);
	Prostokat *p = new Prostokat(1, 1);

	Trojkat t1(3.0, 4.0, 5.0);
	Trojkat *t = new Trojkat(3.0, 4.0, 5.0);

	Kolo k1(3);
	Kolo *k2 = new Kolo(4);
	delete k2;

	FiguraPlaska *tab[5];
	tab[0] = &p1;
	tab[1] = &p2;											   
	tab[2] = p;
	tab[3] = &t1;
	tab[4] = t;
	

	for (int i = 0; i < 5; i++) {
		cout << "Pole: " << tab[i]->Pole() << endl;
		cout << "Obwod: " << tab[i]->Obwod() << endl;
		cout << "figura " << *tab[i] << endl;
	}
	
	return 0;
}