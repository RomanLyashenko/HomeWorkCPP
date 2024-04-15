#include <iostream>
using namespace std;

void appendArray(int*& array){
    int size = _msize(array) / sizeof(array[0]);
    for (int i = 0; i < size; i++) {
        array[i] = rand() % 11;
    }
}

void showArray(int*& array) {
    int size = _msize(array) / sizeof(array[0]);
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void removeElements(int*& array, int* array2) {
    int size3 = 0;
    int size = _msize(array) / sizeof(array[0]);
    int size2 = _msize(array2) / sizeof(array2[0]);
    for (int i = 0, flag; i < size; i++) {
        flag = true;
        for (int j = 0; j < size2; j++) {
            if (array[i] == array2[j]) {
                flag = false;
                break;
            }
        }
        if (flag) size3++;
    }
    int* array3 = new int [size3] {};
    int n = 0;
    for (int i = 0, flag; i < size; i++) {
        flag = true;
        for (int a = 0; a < size2; a++) {
            if (array[i] == array2[a]) {
                flag = false;
            }
        }
        if (flag) {
            array3[n++] = array[i];
        }
    }
    delete[] array;
    array = array3;
}

int main()
{
    srand(time(NULL));
    int size = 7;
    int size2 = 3;
    int* array = new int [size];
    int* array2 = new int [size2];
    appendArray(array);
    appendArray(array2);
    showArray(array);
    showArray(array2);
    removeElements(array, array2);
    showArray(array);
}

