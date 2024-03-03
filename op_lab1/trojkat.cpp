#include "trojkat.h"

#include <iostream>

using namespace std;

Trojkat::Trojkat(double a, double b, double c)
	: a(a), b(b), c(c) {
	cout << "Konstruktor trojkata" << endl;
}

void Trojkat::Wypisz(std::ostream& out) const {
	out << "Trojkat o bokach: " << a << ", " << b << ", " << c << endl;
}

double Trojkat::Obwod() {
	return a + b + c;
}

double Trojkat::Pole() {
	double p = Obwod() / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

double Trojkat::GetA() const {
	return a;
}

double Trojkat::GetB() const {
	return b;
}
	
double Trojkat::GetC() const {
	return c;
}

void Trojkat::SetA(double a) {
	this->a = a;
}

void Trojkat::SetB(double b) {
	this->b = b;
}

void Trojkat::SetC(double c) {
	this->c = c;
}

Trojkat::~Trojkat() {
	cout << "Destruktor trojkata" << endl;
}
