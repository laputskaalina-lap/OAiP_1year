#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    float y = 2.0f;
    float t = 6.96e-5f;
    float z, q;
    float x_values[] = { 0.7f, -1.9 };

    cout << "Расчет с использованием двойного цикла:" << endl;

    for (float i = 2.0f; i <= 3.0f; i += 0.2f) {

        for (int k = 0; k < 2; k++) {
            float x = x_values[k];

            if (i + x >= 0) {
                z = t * pow(y, 2) - sqrt(i + x) * tan(y);

                if (pow(z, 2) + 5 * z >= 0) {
                    q = sqrt(pow(z, 2) + 5 * z) * log(y);

                    cout << "i = " << i << " | x = " << x << " | z = " << z << " | q = " << q << endl;
                }
            }
        }
    }

    return 0;
}