#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    string chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    while (true) {
        int length;
        cout << "Длина пароля: ";
        cin >> length;

        string password = "";

        for (int i = 0; i < length; i++) {
            password += chars[rand() % chars.size()];
        }

        cout << "Пароль: " << password << endl;
        cout << "Нажми q для выхода или другую клавишу для продолжения: ";

        char choice;
        cin >> choice;

        if (choice == 'q') {
            break;
        }
    }

    return 0;
}