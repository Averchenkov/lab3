#ifndef LIBRARY_H
#define LIBRARY_H

#include <utility>
#include "Circle.h"
#include "Polygon.h"

typedef std::pair<float,float> Tochka;

float otrezok(Tochka,Tochka);
void raspologenie(Tochka,Circle&,int *,int *,int *);
int proverka(Circle &, Polygon &);

#endif
