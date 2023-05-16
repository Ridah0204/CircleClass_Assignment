#include "Circle.h"

void Circle:: setRadius(double r) {

	radius = r;

}

double Circle::getArea()const
{
	return 3.14159 * radius * radius;

}

double Circle::getRadius()const {

	return radius;
}

Circle::Circle() 
{
	radius = 0;
}

Circle::Circle(double r)
{
	radius = r;
}
