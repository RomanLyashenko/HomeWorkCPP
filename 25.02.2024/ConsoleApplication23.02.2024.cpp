# include <iostream>
using namespace std;

int main()
{
	// task 1

	/* 
	int num1 = 100, num2 = 999, count = 0;
	while (num1 <= num2) {
		if (num1 % 10 == num1 / 10 % 10) count++;
		if (num1 % 10 == num1 / 10 % 10 / 10) count++;
		if (num1 / 10 % 10 / 10 == num1 / 10 % 10) count++;
		num1++;
	}
	cout << count;
	*/

	// task 2

	/* 
	int num1 = 100, num2 = 999, count = 0;
	while (num1 <= num2) {
		if (num1 % 10 != num1 / 10 % 10 && num1 % 10 != num1 / 10 % 10 / 10 && num1 / 10 % 10 / 10 != num1 / 10 % 10) count++;
		num1++;
	}
	cout << count;
	*/

	// task 3

	/* 
	int num, denum = 0, n = 1, look;
	cout << "input a number: ";
	cin >> num;
	while (num != 0) {
		look = (num % 10);
		if ((look == 3) || (look== 6)) {

		}
		else {
			denum += look * n;
			n = n * 10;
		}
		num = num / 10;
	}
	cout << denum << endl;
	*/

	// task 4

	/* 
	int num;
	cout << "input a number: ";
	cin >> num;	
	for (int i = 1; i < num; i++) {
		if (num % (i * i) == 0)
			cout << i << "; ";
	} 
	cout << endl;
	for (int i = 1; i < num; i++) {
		if (num % (i * i * i) == 0)
			cout << i << "; ";
	}
	*/

	// task 5

	/* 
	int num, buf, summ = 0;
	cout << "input a number: ";
	cin >> num;
	buf = num;
	while (num > 0) {
		summ += (num % 10);
		num = num / 10;
	}
	if ((summ * summ * summ) == (buf * buf)) 
		cout << "yes";
	else cout << "no";
	*/

	// task 6

	/* 
	int num, denum = 1;
	cout << "input a number: ";
	cin >> num;
	while (denum <= num) {
		if (num % denum == 0) cout << denum << "; ";
		denum++;
	}
	*/

	// task 7

	/* 
	int num1, num2, denum = 1;
	cout << "input 1st number: ";
	cin >> num1;
	cout << "input 2nd number: ";
	cin >> num2;
	if (num1 < num2) swap(num1, num2);
	while (denum <= num2){
		if (num1 % denum == 0 && num2 % denum == 0) cout << denum << "; ";
		denum++;
	}
	*/
}
