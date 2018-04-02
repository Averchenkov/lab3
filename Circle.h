#ifndef CIRCLE_H
#define CIRCLE_H

#include <utility>
#include "Figure.h"

typedef std::pair<float,float> Tochka;


// ---------Класс окружностей-------
class Circle : public Figure
{
    Tochka centr;
    float radius;
public:
	Circle();
	Circle(Tochka,float);
	Circle(const Circle&);
	virtual ~Circle() override;

    Tochka get_centr();
    float get_radius();
    void set_centr(Tochka);
    void set_radius(float);
};

#endif
