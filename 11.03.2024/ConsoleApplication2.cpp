#include <iostream>
using namespace std;

int main()
{
    // task 1

    /*
    int array[10];
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        array[i] = 10 + rand() % 90;
        cout << array[i] << "; ";
    }
    int max = array[0], min = array[0];
    cout << endl;
    for (int i = 0; i < 10; i++) {
        if (max < array[i]) max = array[i];
        if (min > array[i]) min = array[i];
    }
    cout << "max number: " << max << endl;
    cout << "min number: " << min << endl;
    */

    // task 2

    /*
    int array[10], min = 0, max = 0, num, summ = 0;
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        array[i] = 10 + rand() % 90;
        cout << array[i] << "; ";
    }
    cout << endl;
    do {
        cout << "input low index of your range: ";
        cin >> min;
        cout << "input high index of your range: ";
        cin >> max;
        if (min > 10 || min < 0 || max > 10 || max < 0)
            cout << "ERROR\nthe wrong indices";
    } while (min > 10 || min < 0 || max > 10 || max < 0);
    if (min > max) swap(min, max);
    cout << "input a number: ";
    cin >> num;
    for (int i = min; i <= max; i++) {
        if (array[i] < num) summ += array[i];
    }
    cout << "sum: " << summ;
    */

    // task 3

    /* 
    int array[12], minR, maxR, indexMin = 0,indexMax = 0, minPr, maxPr;
    for (int i = 0; i < 12; i++) {
        cout << "input your profit in " << i + 1 << " month($): ";
        cin >> array[i];
    }
    do {
        cout << "input low index of your range(month): ";
        cin >> minR;
        cout << "input high index of your range(month): ";
        cin >> maxR;
        if (minR > 12 || minR < 1 || maxR > 12 || maxR < 1)
            cout << "ERROR\nthe unknown month" << endl;
    } while (minR > 12 || minR < 1 || maxR > 12 || maxR < 1);
    if (minR > maxR) swap(minR, maxR);
    minPr = array[minR - 1];
    maxPr = array[minR - 1];
    for (int i = minR; i < maxR; i++) {
        if (minPr > array[i]) {
            minPr = array[i];
            indexMin = i;
        }
        if (maxPr < array[i]) {
            maxPr = array[i];
            indexMax = i;
        }
    }
    cout << "the lowest profit in " << indexMin + 1 << " month" << endl;
    cout << "the highest profit in " << indexMax + 1 << " month";
    */

    // task 4

    /* 
    int n, sum = 0;
    cout << "how many number will be in an array: ";
    cin >> n;
    int* array = new int[n];
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        array[i] = (- 30 + rand() % 99);
        cout << array[i] << "; ";
    }
    cout << endl;
    for (int i = 0; i < n; i++) {
        if (array[i] < 0) sum += array[i];
    }
    cout << "sum of negative numbers is: " << sum << endl;
    int max = array[0], min = array[0], mult1 = 1, maxindex,minindex;
    for (int i = 0; i < n; i++) {
        if (max < array[i])
        {
            max = array[i];
            maxindex = i;
        }
        if (min > array[i]) 
        {
            min = array[i];
            minindex = i;
        }
    }
    if (minindex > maxindex)
    {
        for (int i = maxindex + 1; i < minindex; i++) {
            mult1 *= array[i];
        }
        cout << "the multiplication of numbers between min and max is: " << mult1 << endl;
    }
    else 
    {
        for (int i = minindex + 1; i < maxindex; i++) {
            mult1 *= array[i];
        }
        cout << "the multiplication of numbers between min and max is: " << mult1 << endl;
    }
    int mult2 = 1;
    for (int i = 0; i < n; i += 2) {
        mult2 *= array[i];
    }
    cout <<"the multiplication of numbers with even items: "<< mult2 << endl;
    int index1 = 0, index2 = 0, sum2 = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] < 0) {
            index1 = i;
            break;
        }
    }
    for (int i = n-1; i >= 0; i--) {
        if (array[i] < 0) {
            index2 = i;
            break;
        }
    }
    for (int i = index1 + 1; i < index2; i++) {
        sum2 += array[i];
    }
    cout << "sum of numbers between 1st and last negative items: " << sum2;
    */
}

