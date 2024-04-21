#include <iostream>;
using namespace std;

void deleteStr(int**& array, int num) {
	int size1 = _msize(array) / sizeof(array[0]);
	int** arraynew = new int* [size1 - 1];

	for (int i = 0; i < num; i++) {
		arraynew[i] = array[i];
	}
	for (int i = num + 1; i < size1; i++) {
		arraynew[i - 1] = array[i];
	}
	delete[]array[num];
	delete[]array;
	array = arraynew;
}

void deleteNum(int**& array, int num) {
	int size1 = _msize(array) / sizeof(array[0]);
	int size2 = _msize(array[0]) / sizeof(array[0][0]);
	int** arraynew = new int* [size1];

	for (int i = 0; i < size1; i++) {
		arraynew[i] = new int[size2 - 1];
	}
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < num; j++) {
			arraynew[i][j] = array[i][j];
		}
	}
	for (int i = 0; i < size1; i++) {
		for (int j = num + 1; j < size2; j++) {
			arraynew[i][j - 1] = array[i][j];
		}
	}

	for (int i = 0; i < size1; i++) {
		delete[]array[i];
	}
	delete[]array;
	array = arraynew;
}

void uppendStr(int**& array, int num, int* array2) {
	int size1 = _msize(array) / sizeof(array[0]);
	int** arraynew = new int* [size1 + 1];

	for (int i = 0; i < num; i++) {
		arraynew[i] = array[i];
	}
	arraynew[num] = array2;
	for (int i = num + 1; i < size1; i++) {
		arraynew[i] = array[i - 1];
	}


	delete[]array;
	array = arraynew;
}

void uppendNum(int**& array, int num, int* array2) {
	int size1 = _msize(array) / sizeof(array[0]);
	int size2 = _msize(array[0]) / sizeof(array[0][0]);
	int** arraynew = new int* [size1];

	for (int i = 0; i < size1; i++) {
		arraynew[i] = new int[size2 + 1];
		for (int j = 0; j < num; j++) {
			arraynew[i][j] = array[i][j];
		}
	}
	for (int i = 0; i < size1; i++) {
		arraynew[i][num] = array2[i];
	}

	for (int i = 0; i < size1; i++) {
		for (int j = num + 1; j < size2 + 1; j++) {
			arraynew[i][j] = array[i][j - 1];
		}
	}

	for (int i = 0; i < size1; i++) {
		delete[]array[i];
	}
	delete[]array;
	array = arraynew;
}

void showArray(int** array) {
	int size1 = _msize(array) / sizeof(array[0]);
	int size2 = _msize(array[0]) / sizeof(array[0][0]);
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

}

int main()
{
	srand(time(NULL));
	int size1 = 10;
	int size2 = 5;
	int** array = new int* [size1];
	for (int i = 0; i < size1; i++) {
		array[i] = new int[size2];
		for (int j = 0; j < size1; j++) {
			array[i][j] = rand() % 11;
		}
	}
	int* array2 = new int[size1] {};
	int* array3 = new int[size2] {};

	showArray(array);
	deleteNum(array, 3);
	showArray(array);
	deleteStr(array, 3);
	showArray(array);
	uppendNum(array, 1, array3);
	showArray(array);
	uppendStr(array, 3, array2);
	showArray(array);
}