#include <iostream>
using namespace std;

int main()
{
	int x, y;
	do {
		cin >> x;
		if(x > 8 || x < 1){
			cout << "the wrong 'x' coordinates. ";
			cout << endl;
			cin >> x;
		}
		cin >> y;
		if (y > 8 || y < 1) {
			cout << "the wrong 'y' coordinates. ";
			cout << endl;
			cin >> y;
		}
	} while (x > 8 || x < 1 || y > 8 || y < 1);
	char field[8][8];
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (i % 2 == j % 2) {
				field[i][j] = 219;
			}
			else field[i][j] = ' ';
		}
	}
	for (int i = 3, j = 1; x - i < x; i -= 2, j += 2) {
		if (y + j < 9) {
			field[x - i - 1][y + j - 1] = '*';
		}
		if (y - j > 0) {
			field[x - i - 1][y - j - 1] = '*';
		}
	}

	for (int i = 3, j = 1; x - i < x; i -= 2, j += 2) {
		if (y + j < 9) {
			field[x + i - 1][y + j - 1] = '*';
		}
		if (y - j > 0) {
			field[x + i - 1][y - j - 1] = '*';
		}
	}
	field[x - 1][y - 1] = '@';
	cout << "   a b c d e f g h" << endl;
	for (int i = 0; i < 8; i++) {
		cout << i + 1 << " ";
		for (int j = 0; j < 8; j++) {
			cout << field[i][j] << field[i][j];
		}
		cout << endl;
	}

}
