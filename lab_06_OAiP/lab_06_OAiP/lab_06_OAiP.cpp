#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    float x = 0.9f;
    float y = 2.0f;
    float t = 6.96e-5f;
    float z, q;

    float i_values[] = { 9.0f, -1.4f, 5.0f };

    cout << "Расчет с использованием цикла for:" << endl;
    for (int n = 0; n < 3; n++) {
        float i = i_values[n];

        if (i + x < 0) {
            cout << "При i = " << i << " выражение (i + x) < 0. Вычисление невозможно." << endl;
            continue;
        }

        z = t * pow(y, 2) - sqrt(i + x) * tan(y);

        q = sqrt(pow(z, 2) + 5 * z) * log(y);

        cout << "i = " << i << " | z = " << z << " | q = " << q << endl;
    }

    return 0;
}