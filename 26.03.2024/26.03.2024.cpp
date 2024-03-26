#include <iostream>
using namespace std;

void showDegree() {
    int num, deg;
    cout << "input a number: ";
    cin >> num;
    cout << "input degree: ";
    cin >> deg;
    cout << "final result: " << pow(num, deg) << endl;
}

void showSumInARange(int count = 0) {
    int num1, num2;
    cout << "input low border of the range: ";
    cin >> num1;
    cout << "input hight border of the range: ";
    cin >> num2;
    if (num1 > num2) swap(num1, num2);
    for (int i = num1; i <= num2; i++) {
        count += i;
    }
    cout << "sum: " << count;
}

void showPerfectNumber(){
    int num1, num2, count = 0;
    cout << "input low border of the range: ";
    cin >> num1;
    cout << "input hight border of the range: ";
    cin >> num2;
    if (num1 > num2) swap(num1, num2);
    cout << "perfect numbers: "; 
    for (int i = num1; i <= num2; i++) {
        for (int j = 1; j < i; j++) {
            if (i % j == 0) count += j;
        }
        if (count == i) cout << i << "; ";
        count = 0;
    }
}

void showPlayingCard() {
    char num;
    cout << "input an index of your card(2, 3, 4, 5, 6, K, Q, D, J, A): ";
    cin >> num;
    char suit;
    cout << "choose the siut(" << char(3) << " " << char(4) << " " << char(5) << " " << char(6) << "): ";
    cin >> suit;
    cout << " _______"<<endl;
    cout << "|"<<num<<suit<<"     |"<<endl;
    cout << "|       |"<<endl;
    cout << "|       |"<<endl;
    cout << "|       |"<<endl;
    cout << "|     " << suit << num << "|" << endl;
    cout << "|_______|";
}
void luckyNumber() {
    int num;
    do {
        cout << "input six-digit number: ";
        cin >> num;
        if (num > 999999 || num < 100000) cout << "the wrong number." << endl;
    } while (num > 999999 || num < 100000);
    if (num / 100000 + num / 10000 % 10 + num / 1000 % 10 == num / 100 % 10 + num / 10 % 10 + num % 10)
        cout << "your number is lucky";
    else cout << "your number is unlucky";  
}


int main()
{
    //task 1
    //showDegree();

    //task 2
    //showSumInARange();

    //task3
    //showPerfectNumber();

    //task 4
    //showPlayingCard();

    //task 5
    //luckyNumber();
}

