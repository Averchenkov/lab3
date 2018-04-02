#ifndef POLYGON_H
#define POLYGON_H

#include <utility>
#include "Figure.h"
#include "Circle.h"

typedef std::pair<float,float> Tochka;

// ---------Класс многоугольников-------
class Polygon : public Figure
{
protected:
	Tochka a;
	Tochka b;
	Tochka c;
    Tochka d;
public:
    Polygon();
	Polygon(Tochka,Tochka,Tochka);
    Polygon(Tochka,Tochka,Tochka,Tochka);
    virtual ~Polygon() override;

    Tochka get_a();
    Tochka get_b();
    Tochka get_c();
    Tochka get_d();
    void set_a(Tochka);
    void set_b(Tochka);
    void set_c(Tochka);
    void set_d(Tochka);
    virtual int proverka(Circle &) = 0;
};

#endif
