#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    float x = 0.9f;
    float y = 2.0f;
    float t = 6.96e-5f;
    float z, q;
    float i = 1.0f;

    cout << "Расчет с использованием цикла while:" << endl;

    while (i <= 2.0f) {
        if (i + x >= 0) {
            z = t * pow(y, 2) - sqrt(i + x) * tan(y);

            if (pow(z, 2) + 5 * z >= 0) {
                q = sqrt(pow(z, 2) + 5 * z) * log(y);

                cout << "i = " << i << " | z = " << z << " | q = " << q << endl;
            }
        }
        i += 0.2f;
    }

    return 0;
}