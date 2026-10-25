#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	for (int t = 1  ; t<= 20  ; t++) {
		if (t % 2 == 0) {
			cout << "Цифра ="<< t << "Корень =" << sqrt(t) << endl;
		}
		else {
			continue;
		}
	}
     return 0;
}