#include "Circle.h"

#include<iostream>

using std::cout;

int main() {

	
	Circle circles[5] = {
		Circle(12), 
		Circle(7),
		Circle (9),
		Circle(14),
		Circle(8)
	};


		
	
	
	

	for (int i = 0; i < 5; i++) {

		cout << "\nCircle's " << i + 1 << " Radius: ";
		cout << circles[i].getRadius();
		cout << "\nArea is:" << circles[i].getArea();

		
	}





	return 0;
}