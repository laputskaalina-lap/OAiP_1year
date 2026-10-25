#include <iostream>
void main()
{
    setlocale(LC_CTYPE, "Russian");
    using namespace std;
    double L;
    cout << "Введите длину окружности L: ";
    cin >> L;
    const double pi = 3.141592653589793;
    double S = L * L / (4.0 * pi);

    cout << "\nПотоковый вывод (cout)" << endl;
    cout.setf(ios::fixed);
    cout.precision(4);
    cout << "Длина окружности: " << L << endl;
    cout << "Площадь круга: " << S << endl;

    printf("\nФорматированный вывод (printf)\n");
    printf("Длина окружности: %10.4f\n", L);
    printf("Площадь круга: %10.4f\n", S);
}
