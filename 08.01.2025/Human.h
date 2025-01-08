#pragma once
#include <iostream>
using namespace std;
#include <string>

class Human
{
private:
	string name;
	string lastName;
	string fatherName;
public:
	Human();
	Human(string, string, string);
	Human(Human&);
	string getName();
	string getLastName();
	string getFatherName();
	void setName(string);
	void setLastName(string);
	void setFatherName(string);
	void print();
	~Human();
};

