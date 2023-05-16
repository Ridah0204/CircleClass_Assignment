#pragma once
class Circle
{
private:
	double radius;

public:
	Circle();
	Circle(double r);
	void setRadius(const double r);
	double getRadius()const;
	double getArea()const;

	//void Circle::setRad(const Double r);


};
