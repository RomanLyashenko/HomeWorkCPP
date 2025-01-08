#include <iostream>
#include <string>
#include "Human.h"
#include "Date.h"
#include "Lift.h"
using namespace std;


int main()
{
	Date date1(10, 10, 1964);
	Human human1(1, "Oleg", "Olegivenko", "Alex", date1);
	human1.countHumans();
	human1.printHuman();
	Lift lift(1, 10);
	lift.liftOn();
	lift.setCurrentFloor(5);
	cout << lift.getCurrentFloor();
}
