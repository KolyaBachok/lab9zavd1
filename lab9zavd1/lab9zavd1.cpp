#include <iostream>
#include <Windows.h>
#include<cstdlib>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double numbers[7], product = 1.0;
    int count = 0;

    cout << "Введіть 7 дійсних чисел: ";
    for (int i = 0; i < 7; i++) {
        cin >> numbers[i];
        if (numbers[i] < 6) {
            product *= numbers[i];
            count++;
        }
    }

    if (count > 0) {
        cout << "Добуток елементів менше 6: " << product << endl;
    }
    else {
        cout << "Немає чисел, менших за 6." << endl;
    }

    return 0;
}
