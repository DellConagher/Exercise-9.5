#include <iostream>
#include <cmath>
#include <string>
#include <stdexcept>
#include <iomanip>
#include "9.5.h"



// Constructor definition
Quadratic::Quadratic(double a, double b, double c) {
	setValues(a, b, c);
}

void Quadratic::setValues(double a, double b, double c) {
	setA(a);
	setB(b);
	setC(c);
}

// set a value
void Quadratic::setA(double a) {
	if (a >= 1.0) {
		m_a = a;
	}
	else {
		throw std::invalid_argument("a must be greater than or equal to 1");
	}
}

// set b value
void Quadratic::setB(double b) {
	m_b = b;
}

// set c value
void Quadratic::setC(double c) {
	m_c = c;
}

// return a value
double Quadratic::getA() const { return m_a; }

// return b value
double Quadratic::getB() const { return m_b; }

// return c value
double Quadratic::getC() const { return m_c; }

// add quadratic1 to quadratic2
void Quadratic::add(Quadratic other) {
	m_a += other.getA();
	m_b += other.getB();
	m_c += other.getC();
}

// subtract
void Quadratic::subtract(Quadratic other) {
	m_a -= other.getA();
	m_b -= other.getB();
	m_c -= other.getC();
}

// string
std::string Quadratic::toString() {
	std::string var = std::to_string((int) m_a) + "x^2 + " + std::to_string((int) m_b) + "x + " + std::to_string((int) m_c) + " = 0";
	return var;
}


// solve
void Quadratic::solve() {
	double a = getA();
	double b = getB();
	double c = getC();

	double x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
	double x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

	if ((b * b - 4 * a * c) > 0) {
		std::cout << variable << " = " << x1 << '\n';
		std::cout << variable << " = " << x2 << std::endl;
	}
	else {
		std::cout << "No Real Roots." << std::endl;
	}
}