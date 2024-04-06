#include <iostream>
using namespace std;

int main()
{
	srand(time(NULL));
	const int SIZE = 10;
	int array[SIZE];
	for (int i = 0; i < SIZE; i++) {
		array[i] = 10 + rand() % 91;
		cout << array[i] << " ";
	}
	cout << endl;
	int buf[10][SIZE]{};
	int max = array[0];
	int min = array[0];
	int count = 1;
	for (int i = 1; i < SIZE; i++) {
		if (array[i] > max) max = array[i];
	}
	for (int i = 1; i < SIZE; i++) {
		if (array[i] < min) min = array[i];
	}
	if ((-1 * min) > max) max = min * -1;

	for (int num = 1; (max/num) != 0; num *= 10) {
		count *= 10;
	}
	for (int num = 1; num <= count; num *= 10) {
		for (int i = 0, buf2 = 0; i < SIZE; i++) {
			for (int j = 0; j < 10; j++) {
				if (((array[i] / num)) % 10 == j) buf[j][buf2++] = array[i];
			}
		}
		for (int i = 0, ar = 0; i < 10; i++) {
			for (int j = 0; j < SIZE; j++) {
				if (buf[i][j]) {
					array[ar++] = buf[i][j];
				}
			}
		}
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < SIZE; j++) {
				buf[i][j] = 0;
			}
		}
	}
	for (int i = 0; i < SIZE; i++) {
		cout << array[i] << " ";
	}
}

