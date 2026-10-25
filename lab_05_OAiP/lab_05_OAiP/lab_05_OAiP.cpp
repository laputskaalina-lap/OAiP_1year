#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int r;
	cout << "Введите год: ";
	cin >> r;
	if ((r % 4 == 0 && r % 100 != 0) || (r % 400 == 0)) {
		cout << "Год високосный";
	}
	else {
		cout << "Год не високосный";
	}
	return 0;
	}