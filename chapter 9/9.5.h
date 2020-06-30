#pragma once
#include <iostream>
#include <string>
#include <cmath>

class Quadratic {
public:
	explicit Quadratic(double = 1.0, double = 0.0, double = 0.0); 

	void setValues(double, double, double);
	void setA(double);
	void setB(double);
	void setC(double);

	double getA() const;
	double getB() const;
	double getC() const;

	void add(Quadratic);

	void subtract(Quadratic);

	std::string toString();
	
	void solve();
		
	
private:
	double m_a{};
	double m_b{};
	double m_c{};
	char variable{ 'x' };
};