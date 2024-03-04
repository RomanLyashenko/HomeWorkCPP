﻿#include <iostream>
using namespace std;

int main()
{
	// task 1

	/*
	int num1, num2, num3, num4;
	cout << "input 1st number: ";
	cin >> num1;
	cout << "input 2nd number: ";
	cin >> num2;
	cout << "input 3rd number: ";
	cin >> num3;
	cout << "input 4th number: ";
	cin >> num4;
	if (num1 > num2 && num1 > num3 && num1 > num4)
		cout << "the biggest: " << num1;
	if (num2 > num1 && num2 > num3 && num2 > num4)
		cout << "the biggest: " << num2;
	if (num3 > num1 && num3 > num2 && num3 > num4)
		cout << "the biggest: " << num3;
	if (num4 > num2 && num4 > num3 && num4 > num1)
		cout << "the biggest: " << num4;
	*/

	// task 2

	/*
	int a, b, n;
	cout << "input low border of your range: ";
	cin >> a;
	cout << "input high border of your range: ";
	cin >> b;
	cout << "input how many times the programm must output numbers: ";
	cin >> n;
	if (a < b) swap(a, b);
	for (int i = 0, count = a; i < n; i++) {
		cout << count++ << "; ";
		if (count < b) count = a;
	}
	*/


	// task 3

	/*
	double max;
	cout << "input max: ";
	cin >> max;
	for (double i = 0; i <= max; i += 0.25) {
		cout << i << "; ";
	}
	*/

	// task 4

	/*
	double num = 0, summ = 0, count = 0;
	cout << "input number: ";
	do {
		cin >> num;
		summ += num;
		count++;
	} while (num != 0);
	cout << "avarge: " << summ / (count-1);
	*/

	// task 5

	/*
	string str;
	do {
		cout << "input a symbol: ";
		cin >> str;
		if (str.size() > 1)
			cout << "ERROR\ninput ONLY ONE symbol";
	} while (str.size() > 1);
	char sym = str[0];
	if (sym > 64 && sym < 91 || sym > 96 && sym < 123)
		cout << "this symbol is an english letter";
	else cout << "this sybmol is something else";
	*/

	// task 6

	/*
	int lb1, hb1, lb2, hb2;
	cout << "input low border of your 1st range: ";
	cin >> lb1;
	cout << "input high border of your 1st range: ";
	cin >> hb1;
	cout << "input low border of your 2nd range: ";
	cin >> lb2;
	cout << "input high border of your 2nd range: ";
	cin >> hb2;
	if (lb1 > hb1) swap(lb1, hb1);
	if (lb2 > hb2) swap(lb2, hb2);
	if (lb1 > lb2) swap(lb1, lb2);
	if (hb1 > hb2) swap(hb1, hb2);
	for (int i = lb1; i < lb2 && i<=hb1; i++) cout << i << "; ";
	for (int i = lb2; i <= hb2; i++) {
		if (i > hb1)
			cout << i << "; ";
	}
	*/

	// task 7

	/*
	int a, b, n, count = 0;
	cout << "input low border of your range: ";
	cin >> a;
	cout << "input high border of your range: ";
	cin >> b;
	cout << "input a number: ";
	cin >> n;
	if (a > b) swap(a, b);
	while (a <= b) {
		if (a % n == 0) count++;
		a++;
	}
	cout << count;
	*/
}