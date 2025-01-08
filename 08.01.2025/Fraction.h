#pragma once
#include <iostream>
#include <string>
class Fraction
{
private:
	int num;
	int denom;
public:
	Fraction(int, int);
	~Fraction();
	int getNum();
	int getDenom();
	void setNum(int);
	void setDenom(int);
	void printFraction();
	void sum(Fraction);
	void minus(Fraction);
	void multiplication(Fraction);
	void division(Fraction);
};