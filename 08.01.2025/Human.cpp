#include "Human.h"

Human::Human()
{
	this->name = "Oleg";
	this->surname = "Olegovenko";
	this->fatherName = "Alex";
}

Human::Human(string name, string surname, string fatherName)
{
	this->name = name;
	this->surname = surname;
	this->fatherName = fatherName;
}

Human::Human(Human& human)
{
	this->name = human.name;
	this->surname = human.surname;
	this->fatherName = human.fatherName;
}

string Human::getName()
{
	return this->name;
}

string Human::getLastName()
{
	return this->lastName;
}

string Human::getFatherName()
{
	return this->fatherName;
}

void Human::setName(string name)
{
	this->name = name;
}

void Human::setLastName(string lastName)
{
	this->lastName = lastName;
}

void Human::setFatherName(string fatherName)
{
	this->fatherName = fatherName;
}

void Human::print()
{
	cout << "FIO: " << this->lastName << this->name << this->fatherName;
}

Human::~Human()
{
}
