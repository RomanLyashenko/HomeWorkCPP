#include <iostream>
#include <string>
using namespace std;

/* task 1
struct Car {
	string color;
	string model;
	int number;

	void fillCar() {
		cout << "Enter car color: ";
		cin >> color;
		cout << "Enter car model: ";
		cin >> model;
		do{
			cout << "Enter car number: ";
			cin >> number;
		} while ((number / 10000) < 1 || (number / 10000) >= 10);
	}

	void printCar() {
		cout << "Car color: " << color << endl;
		cout << "Car model: " << model << endl;
		cout << "Car number: " << number << endl;
	}

	void changeCar() {
		int a;
		cout << "what you need do change(1 - color, 2 - model, 3 - number)";
		cin >> a;
		switch (a) {
		case 1:
			cout << "Enter car color: ";
			cin >> color;
			break;
		case 2:
			cout << "Enter car model: ";
			cin >> model;
			break;
		case 3:
			do {
				cout << "Enter car number: ";
				cin >> number;
			} while ((number / 10000) < 1 || (number / 10000) >= 10);
			break;
		default:
			changeCar();
		}
	}


	void printCarInd(Car cars[3], int index) {
		cout << "Car " << index + 1 << " info:" << endl;
		cars[index].printCar();
	}

	void fillCars(Car cars[3]) {
		for (int i = 0; i < 3; i++) {
			cout << "enter car " << i + 1 << " info: " << endl;
			cars[i].fillCar();
			cout << endl;
		}
	}

	void printCars(Car cars[3]) {
		for (int i = 0; i < 3; i++) {
			cout << "car " << i + 1 << " info: " << endl;
			cars[i].printCar();
			cout << endl;
		}
	}
};
*/

// task 2
struct Creature {
	float speed;
	int type;
	string color;
	float birdSpeed;
	bool parnokop;
	int other;
	void fillCreature() {
		cout << "enter speed: ";
		cin >> speed;
		cout << "enter type(1 - bird, 2 - animal, 3 - human): ";
		cin >> type;
		cout << "enter color: ";
		cin >> color;
		switch (type) {
		case 1:
			cout << "enter fly speed: ";
			cin >> birdSpeed;
			break;
		case 2:
			cout << "enter papnokopitnoe\n(no - 0 yes - 1): ";
			cin >> parnokop;
			break;
		case 3:
			cout << "enter other data: ";
			cin >> other;
			break;
		}
	}

	void printCreature() {
		cout << "speed: " << speed << endl;
		cout << "type: ";
		switch (type) {
		case 1:
			cout << "bird" << endl;
			cout << "fly speed: " << birdSpeed;
			break;
		case 2:
			cout << "animal" << endl;
			cout << "parnokopitnoe: ";
			if (parnokop == 0) {
				cout << "no";
			}
			else {
				cout << "yes";
			}
			break;
		case 3:
			cout << "human" << endl;
			cout << "other data: " << other;
			break;
		}
		cout << endl << "color: " << color << endl;
	}

	void changeCreature() {
		int a;
		cout << "what info you want change(1 - speed, 2 - color, 3 - type, 4 - specific): ";
		cin >> a;
		switch (a)
		{
		case 1:
			cout << "enter speed: ";
			cin >> speed;
		case 2:
			cout << "enter color: ";
			cin >> color;
		case 3:
			cout << "enter type\n(1 - bird, 2 - animal, 3 - human): ";
			cin >> type;
			switch (type) {
			case 1:
				cout << "enter fly speed: ";
				cin >> birdSpeed;
				break;
			case 2:
				cout << "enter papnokopitno\n(no - 0 yes - 1): ";
				cin >> parnokop;
				break;
			case 3:
				cout << "enter other data: ";
				cin >> other;
				break;
			}
		case 4:
			switch (type) {
			case 1:
				cout << "enter fly speed: ";
				cin >> birdSpeed;
				break;
			case 2:
				cout << "enter papnokopitnoe\n(no - 0 yes - 1): ";
				cin >> parnokop;
				break;
			case 3:
				cout << "enter other data: ";
				cin >> other;
				break;
			}
		default:
			changeCreature();
		}
	}

	void fillCreatures(Creature creatures[3]) {
		for (int i = 0; i < 3; i++) {
			cout << "enter creature " << i + 1 << " info:" << endl;
			creatures[i].fillCreature();
			cout << endl;
		}
	}

	void printCreatures(Creature creatures[3]) {
		for (int i = 0; i < 3; i++) {
			cout << "creature " << i + 1 << " info:" << endl;
			creatures[i].printCreature();
			cout << endl;
		}
	}

	void searchCreature(Creature creatures[3], int index) {
		cout << "creature " << index + 1 << " info:" << endl;
		creatures[index].printCreature();
	}
};
int main() {
	// task 2
	/* 
	Car cars[3];
	cars->fillCars(cars);
	cars->printCars(cars);
	cars[0].changeCar();
	cars->printCars(cars);
	cars->printCarInd(cars, 2);
	*/

	// task 2
	Creature creatures[3];
	creatures->fillCreatures(creatures);
	creatures->printCreatures(creatures);
	creatures[0].changeCreature();
	creatures->printCreatures(creatures);
	creatures->searchCreature(creatures, 2);
}