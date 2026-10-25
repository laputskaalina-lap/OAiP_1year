#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");

    int a, b, p, q, r, s;

    cout << "Введите размеры участка (a и b): ";
    cin >> a >> b;
    cout << "Введите размеры дома 1 (p и q): ";
    cin >> p >> q;
    cout << "Введите размеры дома 2 (r и s): ";
    cin >> r >> s;

    bool possible = false;
    if ((p + r <= a && (q > s ? q : s) <= b) ||
        (q + s <= b && (p > r ? p : r) <= a)) {
        possible = true;
    }
    if ((q + r <= a && (p > s ? p : s) <= b) ||
        (p + s <= b && (q > r ? q : r) <= a)) {
        possible = true;
    }
    if ((p + s <= a && (q > r ? q : r) <= b) ||
        (q + r <= b && (p > s ? p : s) <= a)) {
        possible = true;
    }
    if ((q + s <= a && (p > r ? p : r) <= b) ||
        (p + r <= b && (q > s ? q : s) <= a)) {
        possible = true;
    }
    if (possible) {
        cout << "Постройки можно разместить на участке." << endl;
    }
    else {
        cout << "Постройки нельзя разместить на участке." << endl;
    }

    return 0;
}