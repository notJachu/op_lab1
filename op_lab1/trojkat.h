#include "FiguraPlaska.h"

class Trojkat : public FiguraPlaska {
private:
	double a,b,c;
protected:
	void Wypisz(std::ostream& out) const override;
public:
	Trojkat(double a, double b, double c);
	void SetA(double a);
	void SetB(double b);
	void SetC(double c);
	double GetA() const;
	double GetB() const;
	double GetC() const;
	double Obwod() override;
	double Pole() override;

	~Trojkat() override;
};
