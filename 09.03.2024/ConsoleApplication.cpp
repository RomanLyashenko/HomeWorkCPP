
#include <iostream>
using namespace std;

int main()
{

    int choose, size;
        cout << "choose a figure(0 - end the programm): ";
        cin >> choose;
        if (choose == 0) {
            cout << "the programm was completed.";
            return 0;
        }
        cout << "choose size of your figure: ";
        cin >> size;
        switch (choose)
        {
        case 1:
            for (int i = 1; i <= size; i++) {
                for (int j = 1; j < i; j++) {
                    cout << "  ";
                }
                for (int j = 0; j <= size - i; j++) {
                    cout << "* ";
                }
                cout << endl;
            }
            break;
        case 2:
            for (int i = 1; i <= size; i++) {
                for (int j = 1; j <= i; j++) {
                    cout << "* ";
                }
                cout << endl;
            }
            break;
        case 3:
            size++;
            for (int i = 1; i <= size / 2; i++) {
                for (int j = 1; j < i; j++) {
                    cout << "  ";
                }
                for (int j = 0; j <= size - i - i; j++) {
                    cout << "* ";
                }
                cout << endl;
            }
            break;
        case 4:
            if (size % 2) {
                for (int i = -3; i <= size / 2; i += 2) {
                    for (int j = (size / 2) + 1; j > i + 1; j--) {
                        cout << " ";
                    }
                    for (int j = i + 3; j >= 0; j--) {
                        cout << "* ";
                    }
                    cout << endl;
                }
            }
            else {
                for (int i = -2; i <= size / 2; i += 2) {
                    for (int j = (size / 2) + 1; j > i + 1; j--) {
                        cout << " ";
                    }
                    for (int j = i + 3; j >= 0; j--) {
                        cout << "* ";
                    }
                    cout << endl;
                }
            }
            break;
        case 5:
            size++;
            for (int i = 1; i <= size / 2; i++) {
                for (int j = 1; j < i; j++) {
                    cout << "  ";
                }
                for (int j = 0; j <= size - i - i; j++) {
                    cout << "* ";
                }
                cout << endl;
            }
            size--;
            if (size % 2) {
                for (int i = 2; i <= size; i += 2) {
                    for (int j = 1; j < size - i; j += 2) {
                        cout << "  ";
                    }
                    for (int j = 0; j <= i; j++) {
                        cout << "* ";
                    }
                    cout << endl;
                }
            }
            else {
                for (int i = 1; i <= size; i += 2) {
                    for (int j = 1; j < size - i; j += 2) {
                        cout << "  ";
                    }
                    for (int j = 0; j <= i; j++) {
                        cout << "* ";
                    }
                    cout << endl;
                }
            }
            break;
        case 6:
            for (int i = 1; i <= (size / 2); i++) {
                for (int j = 1; j <= i; j++) {
                    cout << "* ";
                }
                for (int j = 1; j <= size - (i * 2); j++) {
                    cout << "  ";
                }
                for (int j = 1; j <= i; j++) {
                    cout << "* ";
                }
                cout << endl;
            }
            if (size % 2) {
                for (int i = size; i > 0; i--) {
                    cout << "* ";
                }
                cout << endl;
                for (int i = (size / 2); i > 0; i--) {
                    for (int j = 1; j <= i; j++) {
                        cout << "* ";
                    }
                    for (int j = 1; j <= size - (i * 2); j++) {
                        cout << "  ";
                    }
                    for (int j = 1; j <= i; j++) {
                        cout << "* ";
                    }
                    cout << endl;
                }
            }
            else {
                for (int i = (size / 2); i >= 0; i--) {
                    for (int j = 1; j <= i; j++) {
                        cout << "* ";
                    }
                    for (int j = 1; j <= size - (i * 2); j++) {
                        cout << "  ";
                    }
                    for (int j = 1; j <= i; j++) {
                        cout << "* ";
                    }
                    cout << endl;
                }
            }
            break;
        case 7:
            size++;
            for (int i = 1; i <= size / 2; i++) {
                for (int j = 0; j < i; j++) {
                    cout << "* ";
                }
                cout << endl;
            }
            if (size % 2) {
                for (int i = -3; i <= (size / 2); i += 2) {
                    for (int j = (size / 2); j > i; j -= 2) {
                        cout << "* ";
                    }                     cout << endl;
                }
            }
            else {
                for (int i = -2; i <= size / 2; i += 2) {
                    for (int j = (size / 2); j > i + 1; j -= 2) {
                        cout << "* ";
                    }
                    cout << endl;
                }
            }
            break;
        case 8:
            if (size % 2) {
                for (int i = 1; i < (size + 3) / 2; i++) {
                    for (int j = size - i; j > 0; j--) {
                        cout << "  ";
                    }
                    for (int j = 0; j < i; j++)
                    {
                        cout << "* ";
                    }
                    cout << endl;
                }
            }
            else {
                for (int i = 1; i < (size + 2) / 2; i++) {
                    for (int j = size - i; j > 0; j--)
                    {
                        cout << "  ";
                    }
                    for (int j = 0; j < i; j++)
                    {
                        cout << "* ";
                    }
                    cout << endl;
                }
            }
            for (int i = size / 2; i > 0; i--) {
                for (int j = size - i; j > 0; j--) {
                    cout << "  ";
                }
                for (int j = 1; j <= i; j++) {
                    cout << "* ";
                }
                cout << endl;
            }
            break;
        case 9:
            for (int i = size; i >= 0; i--) {
                for (int j = 1; j <= i; j++) {
                    cout << "* ";
                }
                cout << endl;
            }
            break;
        case 10:
            for (int i = 0; i < size + 1; i++)
            {
                for (int j = size - i; j > 0; j--)
                {
                    cout << "  ";
                }
                for (int j = 0; j < i; j++)
                {
                    cout << "* ";
                }
                cout << endl;
            }
            break;


        default:
            break;
        }
}



           
