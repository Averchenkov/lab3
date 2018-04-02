#include "function.h"
#include "Quadrangle.h"
#include <iostream>

Quadrangle::Quadrangle()
{
    std::cout << "+Q" << std::endl;
}
Quadrangle::Quadrangle(Tochka a,Tochka b,Tochka c,Tochka d) : Polygon(a,b,c,d)
{
    std::cout << "+Q" << std::endl;
}
Quadrangle::~Quadrangle()
{
    std::cout << "-Q" << std::endl;
}
Quadrangle::Quadrangle(const Quadrangle &other)
{
    a = other.a;
    b = other.b;
    c = other.c;
    d = other.d;
    std::cout << "=Q" << std::endl;
}

int Quadrangle::proverka(Circle &k)
{
    int in=0;
    int out=0;
    int touch=0;
    raspologenie(a,k,&in,&out,&touch);
    raspologenie(b,k,&in,&out,&touch);
    raspologenie(c,k,&in,&out,&touch);
    raspologenie(d,k,&in,&out,&touch);
    if(out>0) return 1;
    else if(touch==4) return 2;
    else return 3;
}