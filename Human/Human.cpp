#include "Human.h"

Human::Human()
{
	this->count++;
}

Human::Human(int id, string name, string lastName, string fatherName, Date date)
{
	this->id = id;
	this->name = name;
	this->lastName = lastName;
	this->fatherName = fatherName;
	this->date = date;
	++this->count;
}

Human::Human(Human& human)
{
	this->id = human.id;
	this->name = human.name;
	this->lastName = human.lastName;
	this->fatherName = human.fatherName;
	this->date = human.date;
	this->count++;
}

int Human::getId()
{
	return this->id;
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

Date Human::getDate()
{
	return this->date;
}

void Human::setId(int id)
{
	this->id = id;
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

void Human::setDate(Date date)
{
	this->date = date;
}

void Human::countHumans()
{
	cout << "Humans: " << this->count << endl;
}

void Human::printHuman()
{
	cout << "Student " << id << ":" << endl;
	cout << "FIO: " << this->lastName << " " << this->name << " " << this->fatherName << endl;
	cout << "Birthday date: " << this->date.getDay() << "." << this->date.getMonth() << "." << this->date.getYear() << endl;
}

Human::~Human()
{
	this->count--;
}
