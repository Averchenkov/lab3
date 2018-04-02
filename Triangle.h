#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <utility>
#include "Polygon.h"

typedef std::pair<float,float> Tochka;

// ---------Класс треугольников-------
class Triangle : public Polygon
{
public:
    Triangle();
    Triangle(Tochka,Tochka,Tochka);
    Triangle(const Triangle&);
    virtual ~Triangle() override;

    virtual int proverka(Circle &) override;
};

#endif
