#include "function.h"
#include "Triangle.h"
#include <iostream>

Triangle::Triangle()
{
	std::cout << "+T" << std::endl;
}
Triangle::Triangle(Tochka a,Tochka b,Tochka c) : Polygon(a,b,c)
{
	std::cout << "+T" << std::endl;
}
Triangle::~Triangle()
{
	std::cout << "-T" << std::endl;
}
Triangle::Triangle(const Triangle &other)
{
	a = other.a;
	b = other.b;
	c = other.c;
	std::cout << "=T" << std::endl;
}

int Triangle::proverka(Circle &k)
{
    int in=0;
    int out=0;
    int touch=0;
    raspologenie(a,k,&in,&out,&touch);
    raspologenie(b,k,&in,&out,&touch);
    raspologenie(c,k,&in,&out,&touch);
    if(out>0) return 1;
    else if(touch==3) return 2;
    else return 3;
}
