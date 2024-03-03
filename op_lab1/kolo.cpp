#include "kolo.h"

#include <iostream>

using namespace std;


Kolo::Kolo(double r)
	: r(r)
{
	cout << "konstrukor kola r = " << r << endl;
}

void Kolo::setR(double r) {
	this->r = r;
}
double Kolo::getR() const {
	return r;
}

double Kolo::Pole() {
	return 3.14 * r * r;
}
double Kolo::Obwod() {
	return 2 * 3.14 * r;
}

void Kolo::Wypisz(std::ostream& out) const{
	out << "Kolo o promieniu " << r << endl;
}

Kolo::~Kolo() {
	cout << "destruktor kola r = " << r << endl;
}