#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    srand(time(NULL));
    int choice, bot, currentCounter = 0, record = 0;
    string path = "Victory.txt";

    cout << "1-stone, 2-scissors, 3-paper, 0-stop the game: ";
    cin >> choice;
    while (true) {
        if (choice == 0) break;
        ifstream in(path);
        if (in.is_open()) {
            while (getline(in, path)) {
                for (int i = 0; path[i] != '\0'; i++) {
                    record *= 10;
                    record += path[i] - 48;
                }
            }
        }
        bot = 1 + rand() % 3;
        switch (choice) {
        case 1:
            cout << "(You : stone | Bot : ";
            switch (bot) {
            case 1:
                cout << "stone) result: Draw";
                break;
            case 2:
                cout << "scissors) result: Defeat";
                currentCounter = 0;
                break;
            case 3:
                cout << "paper) result: Victory";
                currentCounter++;
                break;
            }
            break;
        case 2:
            cout << "(You : papper | Bot : ";
            switch (bot) {
            case 1:
                cout << "stone) result: Victory";
                currentCounter++;
                break;
            case 2:
                cout << "papper) result: Draw";
                break;
            case 3:
                cout << "scissors) result: Defeat";
                currentCounter = 0;
                break;
            }
            break;
        case 3:
            cout << "You : scissors | Bot : ";
            switch (bot) {
            case 1:
                cout << "stone) result: Defeat";
                currentCounter = 0;
                break;
            case 2:
                cout << "papper) result: Victory";
                currentCounter++;
                break;
            case 3:
                cout << "scissors) result: Draw";
                break;
            }
            break;
        default:
            cout << "uncorrect number";
            break;
        }
        if (record < currentCounter) {
            record = currentCounter;
            ofstream out;
            out.open("Victory.txt");
            out << record;
            out.close();
        }
        cout << endl << "Win counter: " << currentCounter;
        cout << endl << "1-stone, 2-scissors, 3-paper, 0-leave the game: ";
        cin >> choice;
    }
}

