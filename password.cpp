#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    string chars = "abcdefghijklmnopqrstuvwxyz0123456789";

    int length;
    cout << "Длина пароля: ";
    cin >> length;

    string password = "";