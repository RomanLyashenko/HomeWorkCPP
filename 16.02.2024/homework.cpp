#include <iostream>
using namespace std;

int main()
{
    
    // task 1

    cout << "task 1" << endl;
    int num, num1, num2, num3, num4, num5, num6;
    cout << "input a number: ";
    cin >> num;
    if (num < 100000 or num > 999999) {
        cout << "*ERROR*" << endl;
        cout << "the number must be in a range of numbers from 100000 to 999999";
        return 0;
    }
    num1 = num % 1000000 / 100000;
    num2 = num % 100000 / 10000;
    num3 = num % 10000 / 1000;
    num4 = num % 1000 / 100;
    num5 = num % 100 / 10;
    num6 = num % 10;
    cout << ((num1 + num2 + num3 == num4 + num5 + num6) ? "a lucky number" : "an unlucky number") << endl;
    
    // task 2
     
    cout << "task 2" << endl;
    int numb, numb1, numb2, numb3, numb4;
    cout << "input a number: ";
    cin >> numb;
    if (numb < 1000 or numb > 9999) {
        cout << "*ERROR*" << endl;
        cout << "the number must be in a range of numbers from 1000 to 9999";
        return 0;
    }
    numb1 = numb % 10000 / 1000;
    numb2 = numb % 1000 / 100;
    numb3 = numb % 100 / 10;
    numb4 = numb % 10;
    cout << (numb2 * 1000) + (numb1 * 100) + (numb4 * 10) + numb3 << endl;
    
    // task 3
    
    cout << "task 3" << endl;
    int number1, number2, number3, number4, number5, number6, number7, max;
    cout << "input 7 numbers: " << endl;
    cin >> number1;
    cin >> number2;
    cin >> number3;
    cin >> number4;
    cin >> number5;
    cin >> number6;
    cin >> number7;
    if (number1 > number2)
        max = number1;
    else max = number2;
    if (number3 > max)
        max = number3;
    if (number4 > max)
        max = number4;
    if (number5 > max)
        max = number5;
    if (number6 > max)
        max = number6;
    if (number7 > max)
        max = number7;
    cout << "max number: " << max << endl;

    // task 4

    int distAB, distBC, weight;
    cout << "input a distant between A and B points(km): ";
    cin >> distAB;
    cout << "input a distant between B and C points(km): ";
    cin >> distBC;
    cout << "input weight of a cargo(kg): ";
    cin >> weight;
    int fuel;
    if (weight <= 500) {
        fuel = 1;
    }
    else if (weight <= 1000) {
        fuel = 4;
    }
    else if (weight <= 1500) {
        fuel = 7;
    }
    else if (weight <= 2000) {
        fuel = 9;
    }
    else {
        cout << "the plane cannot lift this cargo" << endl;
        return 0;
    }
    int fuelNeedAB = distAB * fuel;
    int fuelNeedBC = distBC * fuel;

    if (fuelNeedAB > 300 or fuelNeedBC > 300) {
        cout << "it is not possible to cover the distance along this route" << endl;
        return 0;
    }
    int fuelNeedRef = fuelNeedBC - (300 - fuelNeedAB);
    cout << "you should add: " << fuelNeedRef << " liters of fuel" << endl;
    return 0;
}
