#include "Circle.h"
#include <iostream>

Circle::Circle()
{
	std::cout << "+C" << std::endl;
}
Circle::Circle(Tochka centr,float radius)
{
	this->centr = centr;
	this->radius = radius;
	std::cout << "+C" << std::endl;
}
Circle::Circle(const Circle &other)
{
	centr = other.centr;
	radius = other.radius;
	std::cout << "=C" << std::endl;  
}
Circle::~Circle()
{
	std::cout << "-C" << std::endl;
}

Tochka Circle::get_centr()
{
    return centr;
}
float Circle::get_radius()
{
    return radius;
}
void Circle::set_centr(Tochka centr)
{
    this->centr = centr;
}
void Circle::set_radius(float radius)
{
    this->radius = radius;
}
