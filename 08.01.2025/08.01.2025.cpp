#include <iostream>
#include "Fraction.h"
using namespace std;

int main()
{
	Fraction obj1(10, 5);
	Fraction obj2(8, 2);
	obj1.printFraction();
	cout << " ";
	obj2.printFraction();
	cout << endl;
	obj1.sum(obj2);
	cout << endl;
	obj1.minus(obj2);
	cout << endl;
	obj1.multiplication(obj2);
	cout << endl;
	obj1.division(obj2);
}