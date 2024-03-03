#include "figuraPlaska.h"

class Kolo : public FiguraPlaska {
private:
	double r;
protected:
	void Wypisz(std::ostream& out) const override;
public:
	Kolo(double r);
	void setR(double r);
	double getR() const;
	double Pole() override;
	double Obwod() override;


	~Kolo() override;
};