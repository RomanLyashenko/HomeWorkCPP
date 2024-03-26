#include <iostream>
using namespace std;

int main()
{
	srand(time(NULL));
	const int SIZE = 5;
	const int SIZE2 = 2;
	const int SIZE3 = 8;
	int array[SIZE][SIZE];
	int array2[SIZE3][SIZE2];
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			array[i][j] = 10 + rand() % (90);
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	cout << "input coordinates: " << endl;
	for (int i = 0, a = 1, b = 1; i < SIZE3; i++, a++) {
		for (int j = 0, c; j < SIZE2; j++) {
			do {
				cout << a << " coordinates " << "(part " << b++ << "): ";
				cin >> c;
				array2[i][j] = c;
				if (c > 4 || c < 0)
				{
					cout << "ERROR." << endl << "incorrect coordinates." << endl;
					b = b--;
				}
			} while (c > 4 || c < 0);
		}
		b = 1;
		cout << endl;
	}

	for (int i = 0, height, width; i < SIZE3; i++) {
		for (int j = 0; j < SIZE2; j++) {
			height = array2[i][0];
			width = array2[i][1];
			array[height][width] = 0;
		}
	}

	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
}
