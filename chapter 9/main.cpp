#include <iostream>
#include "9.5.h"

int main() {

	Quadratic q1;

	Quadratic q2{ 2.0,0.0,0.0 };

	q1.add(q2);

	std::cout << q1.getA();

	return 0;
}