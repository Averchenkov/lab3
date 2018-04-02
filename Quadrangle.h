#ifndef QUADRANGLE_H
#define QUADRANGLE_H

#include <utility>
#include "Polygon.h"

typedef std::pair<float,float> Tochka;

// ---------Класс четырехугольников-------
class Quadrangle : public Polygon
{
private:
    Tochka d;
public:
    Quadrangle();
    Quadrangle(Tochka,Tochka,Tochka,Tochka);
    Quadrangle(const Quadrangle&);
    virtual ~Quadrangle() override;

    virtual int proverka(Circle &) override;
};

#endif
