#include <iostream>
#define random(min,max) min + rand() % max - min
using namespace std;

void addColumn(int** array) {

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
}

int main()
{
     srand(time(NULL));
    /* 
    int a = 4; 
    cout << a; // 4
    cout << &a; // F0
    int la = a; // к ячейке  F0 мы можем обращаться используя 'a' и 'la'
    la += 2; // a=6 la = 6 (la = link a)
    int* pa = &a;
    cout << pa; // F0
    cout << *pa; // 4
    cout << &pa; // C0 - адрес указателя
    */

    /* 
    int* array = new int[4]{1,2,3,4};
    cout << sizeof(array); // 8 - размер памяти занимаемый указателем
    cout << endl;
    cout << _msize(array); // 16 - общий размер памяти занимаемый массивом
    cout << endl;
    cout << sizeof(array[0]); // 4 - размер памяти занимаемый одинм значением массива
    int size = _msize(array) / sizeof(array[0]); // кол-во элементов в массиве


    int* buf = new int[size - 1];
    for (int i = 0; i < size-1; i++) {
        buf[i] = array[i];
    }
    delete[]array;
    array = buf;
    */

    /* 
    int size = 10;
    int* array = new int[size];
    for (int i = 0; i < size; i++) {
        array[i] = 1 + rand() % 9;
        cout << array[i] << " ";
    }
    cout << endl;
    int count, index;
    cout << "input quantity of numbers: ";
    cin >> count;
    cout << "input the position: ";
    cin >> index;
    int* buf = new int[size - count];
    for (int i = 0; i < index; i++) {
        buf[i] = array[i];
    }
    for (int i = index + count; i < size; i++) {
        buf[i - count] = array[i];
    }
    delete[]array;
    array = buf;
    size = _msize(array) / sizeof(array[0]); 
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    */

    /* 
    int size = 3;
    int size2 = 2;
    int** array = new int* [size];
    for (int i = 0; i < size; i++) {
        array[i] = new int[size2];
        for (int j = 0; j < size2; j++) {
            array[i][j] = 1 + rand() % 9;
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    int** buf = new int* [size+1];
    for (int i = 0; i < size+1; i++) {
        buf[i] = new int[size2];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size2; j++) {
            buf[i][j] = array[i][j];
        }
    }
    for (int i = 0; i < size2; i++) {
        buf[size][i] = 1 + rand() % 9;
    }
    delete[]array;
    array = buf;
    for (int i = 0; i < size + 1; i++) {
        for (int j = 0; j < size2; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    */

    /* 
    int size = 3;
    int size2 = 2;
    int** array = new int* [size];
    for (int i = 0; i < size; i++) {
        array[i] = new int[size2];
        for (int j = 0; j < size2; j++) {
            array[i][j] = random(1, 10);
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    int** buf = new int* [size];
    for (int i = 0; i < size; i++) {
        buf[i] = new int[size2+1];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size2+1; j++) {
            buf[i][j] = array[i][j];
        }
    }
    for (int i = 0; i < size; i++) {
        buf[i][size2] = random(1,10);
    }
    delete[]array;
    array = buf;
    showArray(array);
    cout << endl;
    */

    /* 
    int size = 3;
    int size2 = 2;
    int** array = new int* [size];
    for (int i = 0; i < size; i++) {
        array[i] = new int[size2];
        for (int j = 0; j < size2; j++) {
            array[i][j] = random(1, 10);
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    int** buf = new int* [size];
    for (int i = 0; i < size; i++) {
        buf[i] = new int[size2 - 1];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size2 - 1; j++) {
            buf[i][j] = array[i][j];
        }
    }
    for (int i = 0; i < size; i++) {
        buf[i][size2] = random(1, 10);
    }
    delete[]array;
    array = buf;
    showArray(array);
    cout << endl;
    */

    int size = 3;
    int size2 = 2;
    int** array = new int* [size];
    for (int i = 0; i < size; i++) {
        array[i] = new int[size2];
        for (int j = 0; j < size2; j++) {
            array[i][j] = random(1, 10);
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    int** buf = new int* [size -1];
    for (int i = 0; i < size -1; i++) {
        buf[i] = new int[size2];
    }
    for (int i = 0; i < size-1; i++) {
        for (int j = 0; j < size2; j++) {
           buf[i][j] = array[i][j];
        }
    }
    for (int i = 0; i < size-1; i++) {
        buf[i][size2] = random(1, 10);
    }
    delete[]array;
    array = buf;
    showArray(array);
    cout << endl;
    
}
