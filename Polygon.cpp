#include "Polygon.h"
#include <iostream>

Polygon::Polygon()
{
    std::cout << "+P" << std::endl;
}
Polygon::Polygon(Tochka a,Tochka b,Tochka c)
{
    this->a = a;
    this->b = b;
    this->c = c;
    std::cout << "+P" << std::endl;
}
Polygon::Polygon(Tochka a,Tochka b,Tochka c,Tochka d)
{
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
    std::cout << "+P" << std::endl;
}
Polygon::~Polygon()
{
    std::cout << "-P" << std::endl;
}

Tochka Polygon::get_a()
{
    return a;
}
Tochka Polygon::get_b()
{
    return b;
}
Tochka Polygon::get_c()
{
    return c;
}
Tochka Polygon::get_d()
{
    return d;
}
void Polygon::set_a(Tochka a)
{
    this->a = a;
}
void Polygon::set_b(Tochka b)
{
    this->b = b;
}
void Polygon::set_c(Tochka c)
{
    this->c = c;
}
void Polygon::set_d(Tochka d)
{
    this->d = d;
}