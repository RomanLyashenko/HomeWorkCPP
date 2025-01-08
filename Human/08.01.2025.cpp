#include <iostream>
#include <string>
using namespace std;
#include "Human.h"
#include "Date.h"
#include "Lift.h"

int main()
{
	Date date1(10, 10, 1964);
	Human human1(1, "Oleg", "Oledovenko", "Alex", date1);
	human1.countHumans();
	human1.printHuman();
	Lift lift(1, 10);
	lift.liftOn();
	lift.setCurrentFloor(5);
	cout << lift.getCurrentFloor();
}
