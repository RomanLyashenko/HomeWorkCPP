#include <iostream>
using namespace std;

int main()
{
    srand(time(NULL));
    const int SIZE = 10;
    const int SIZE2 = 5;
    const int SIZE3 = SIZE + SIZE2;
    int array[SIZE];
    int array2[SIZE2];
    for (int i = 0; i < SIZE; i++) {
        array[i] = 0 + rand() % (11);
        cout << array[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < SIZE2; i++) {
        array2[i] = 0 + rand() % (11);
        cout << array2[i] << " ";
    }
    cout << endl;
 
    cout << "non-unique elements: ";
    for (int i = 0, flag; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (array[i] == array2[j]) {
                flag = true;
                for(int a = 0; a < i; a++) {
                    if (array[i] == array[a]) {
                        flag = false;
                        break;
                    }
                }
                if (flag) {
                    cout << array[i] << " ";
                    break;
                }
                else break;
            }
        }
    }
    cout << endl;

    cout << "unique elements: ";
    for (int i = 0, flag; i < SIZE; i++) {
        flag = true;
        for (int j = 0; j < SIZE; j++) {
            if (array[i] == array2[j]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            for (int a = 0; a < i; a++) {
                if (array[a] == array[i]) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                for (int a = i+1; a < SIZE; a++) {
                    if (array[a] == array[i]) {
                        flag = false;
                        break;
                    }
                }
                if (flag) cout << array[i]<<" ";
            }
        }
    }
    for (int i = 0, flag; i < SIZE; i++) {
        flag = true;
        for (int j = 0; j < SIZE; j++) {
            if (array2[i] == array[j]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            for (int a = 0; a < i; a++) {
                if (array2[a] == array2[i]) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                for (int a = i + 1; a < SIZE; a++) {
                    if (array2[a] == array2[i]) {
                        flag = false;
                        break;
                    }
                }
                if (flag) cout << array2[i]<<" ";
            }
        }
    }
}
 