#include <iostream>
using namespace std;

int main()
{
	// task 1

	/* 
	int num;
	cout << "input a number: ";
	cin >> num;
	const int SIZE1 = 2;
	const int SIZE2 = 5;
	int array[SIZE1][SIZE2]{};
	array[0][0] = num;
	for (int i = 0; i < SIZE1; i++) {
		for (int j = 0; j < SIZE2; j++) {
			if (i == 0 && j < SIZE2) {
				array[i][j+1] =  num *= 2;
				cout << array[i][j] << " ";
			}
			else
			{
				array[i][j] = num *= 2;
				cout << array[i][j] << " ";
			}
		}
		cout << endl;
	}
	*/

	// task 2

	/* 
	int num;
	cout << "input a number: ";
	cin >> num;
	const int SIZE1 = 2;
	const int SIZE2 = 5;
	int array[SIZE1][SIZE2]{};
	array[0][0] = num;
	for (int i = 0; i < SIZE1; i++) {
		for (int j = 0; j < SIZE2; j++) {
				array[i][j] = num++;
				cout << array[i][j] << " ";
		}
		cout << endl;
	}
	*/
}


