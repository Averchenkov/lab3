#include "Figure.h"
#include <iostream>

Figure::Figure()
{
	std::cout << "+F" << std::endl;
}
Figure::~Figure()
{
	std::cout << "-F" << std::endl;
}