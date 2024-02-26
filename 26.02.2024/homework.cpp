#include <iostream>
using namespace std;

int main()
{


	// task 1 


	/*
	string str;
	do {
		cout << "input a symbol: ";
		cin >> str;
		if (str.size() > 1)
			cout << "ERROR\ninput ONLY ONE symbol";
	} while (str.size() > 1);
	char buf=str[0];
	if (buf > 47 && buf < 58) {
		cout << "your symbol is a number";
		return 0;
	}
	if (buf > 64 && buf < 91 || buf > 96 && buf < 123) {
		cout << "your symbol is a letter";
		return 0;
	}
	if (buf == 33 || buf == 44 || buf == 46 || buf == 63) {
		cout << "your sumbol is a punctuation mark";
		return 0;
	}
	else cout << "your symbol is something else";
	*/


	// task 2


	/*
	int hlong, oper1, oper2;
	float MTC, Megafone, TELE2;
	MTC = 0.02;
	Megafone = 0.01;
	TELE2 = 0.03;
	do {
		cout << "choose YOUR mobile operator:\n1-MTC; 2-Megafone; 3-TELE2\nyour choice is: ";
		cin >> oper1;
		cout << "choose mobile operator of your COMPANION:\n1-MTC; 2-Megafone; 3-TELE2\nyour choice is: ";
		cin >> oper2;
		if (oper1 < 1 || oper1 > 3 || oper2 < 1 || oper2 > 3) {
			cout << "ERROR\nan unknown operator\n";
		}
	} while (oper1 < 1 || oper1 > 3 || oper2 < 1 || oper2 > 3);
	if (oper1 == oper2) {
		cout << "your call is FREE";
		return 0;
	}
	cout << "input call duration(min): ";
	cin >> hlong;
	if (oper1 == 1){
		cout << "price of your call is: " << hlong * MTC << "$";
		return 0;
	}
	if (oper1 == 2) {
		cout << "price of your call is: " << hlong * Megafone << "$";
		return 0;
	}
	if (oper1 == 3) {
		cout << "price of your call is: " << hlong * TELE2 << "$";
		return 0;
	}
	*/


	// task 3

	/* 
	int sal, late, kode;

	cout << "how much Vasya wants to get?($): ";
	cin >> sal; 
	do {
		cout << "how many times Vasya has been late?: ";
		cin >> late;
		if (late < 0) {
			cout << "ERROR\nwrong amount of lateness\n";
		}
	} while (late < 0);
	if (late < 3) {
		cout << "Vasya must make " << sal * 2 << " lines of code << endl";
	}
	if (late >= 3) {
		cout << "Vasya must make " << (sal * 2) + ((late / 3) * 40) << " lines of code" << endl;
	}

	do {
		cout << "how many lines of kode Vasya has made?: ";
		cin >> kode;
		cout << "how much Vasya wants to get?($): ";
		cin >> sal;
		if ((((kode - (sal * 2)) / 20) / 3) < 0) {
			cout << "Vasya has been late too many times" << endl;
		}
	} while ((((kode - (sal * 2)) / 20) / 3) < 0);
	if ((((kode - (sal * 2)) / 20) / 3) >= 0)
	cout << "Vasya may not be late more than: " << (((kode - (sal * 2)) / 20) / 3) << " times" << endl;

	cout << "how many lines of kode Vasya has made?: ";
	cin >> kode;
	cout << "how many times Vasya has been late?: ";
	cin >> late;
	if ((kode / 2) < ((late / 3) * 20)) {
		cout << "Vasya must pay: " << ((late / 3) * 20) - (kode / 2) << "$";
		return 0;
	}
	if ((kode / 2) == ((late / 3) * 20)) {
		cout << "you must not pay to Vasya";
		return 0;
	}
	if ((kode / 2) > ((late / 3) * 20)) {
		cout << "you must pay to Vasya: " << ((kode / 2) - ((late / 3) * 20)) << "$";
		return 0;
	}
	*/
}
