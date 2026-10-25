#include <iostream>

int main() {
    setlocale(LC_CTYPE, "Russian");
    using namespace std;
    int Y;
    cout << "Введите номер года: ";
    cin >> Y;

    if ((Y % 4 == 0 && Y % 100 != 0) || (Y % 400 == 0)) {
        cout << Y << " — високосный год" << endl;
    }
    else {
        cout << Y << " — не високосный год" << endl;
    }

    return 0;
}
