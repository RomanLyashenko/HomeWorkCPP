#include <iostream>
using namespace std;

void showArray(int** array) {
	int size1 = _msize(array) / sizeof(array[0]);
	int size2 = _msize(array[0]) / sizeof(array[0][0]);
	for (int i = 0; i < size1 - 1; i++) {
		for (int j = 0; j < size2; j++) {
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void appendArray(int**& array, int* arraynew) {
	int size1 = _msize(array) / sizeof(array[0]);
	int size2 = _msize(array[0]) / sizeof(array[0][0]);
	int** array2 = new int* [size1];
	for (int i = 0; i < size1; i++) {
		array2[i] = new int[size2 + 1];
		for (int j = 0; j < size2; j++) {
			array2[i][j] = array[i][j];
		}
	}
	for (int i = 0; i < size1; i++) {
		array2[i][size2] = arraynew[i];
	}
	for (int i = 0; i < size1; i++) {
		delete[]array[i];
	}
	delete[]array;
	array = array2;
}

int main()
{
	srand(time(NULL));
	int size = 4;
	int size2 = 3;
	int** array = new int* [size];
	for (int i = 0; i < size; i++) {
		array[i] = new int[size2];
		for (int j = 0; j < size2; j++) {
			array[i][j] = rand() % 10;
		}
	}
	showArray(array);
	int* array2 = new int[size] {};
	appendArray(array, array2);
	showArray(array);
}
