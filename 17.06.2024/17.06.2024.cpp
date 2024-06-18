#include <iostream>
using namespace std;

void showStr(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        cout << str[i];
    }
    cout << endl;
}

void deleteSymbolbyIndex(char str[], int index) {
    for (int i = index; str[i] != '\0'; i++) {
        str[i] = str[i + 1];
    }
}

void deleteSymbolbyMeaning(char str[], char symbol) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == symbol) {
            count++;
        }
        if (str[i + count] == symbol) {
            count++;
        }
        str[i] = str[i + count];
    }
}

// not working 
//void addSymbol(char str[], char symbol, int index) {
//    int size = 0;
//    for (int i = 0; str[i] != '\0'; i++) {
//        size++;
//    }
//    char* buf = new char[size + 1];
//    for (int i = 0; i < index-1; i++) {
//        buf[i] = str[i];
//    }
//    buf[index] = symbol;
//    for (int i = index + 1; str[i] != '\0'; i++) {
//        buf[i] = str[i];
//    }
//    delete str;
//    str = buf;
//}

void replacement(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '.') {
            str[i] = '!';
        }
    }
}

void countingSymbols(char str[], char elem) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == elem) count++;
    }
    cout << "amout of sumbols: " << count << endl;
}

void separation(char str[]) {
    int letters = 0, numbers = 0, symbols = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)) {
            letters++;
        }
        else if (str[i] >= 48 && str[i] <= 57) {
            numbers++;
        }
        else {
            symbols++;
        }
    }
    cout << "letters: " << letters <<endl <<"numbers: " << numbers << endl << "another symbols: " << symbols;
}

int main()
{
    char str[] = { ".qwerty." };
    deleteSymbolbyIndex(str, 5);
    showStr(str);
    deleteSymbolbyMeaning(str, 'q');
    showStr(str);
    //addSymbol(str, 'H', 3);
    //showStr(str);
    replacement(str);
    showStr(str);
    countingSymbols(str, '!');
    separation(str);
}

