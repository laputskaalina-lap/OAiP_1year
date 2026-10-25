#include <iostream>
#include <iomanip>
void main()
{
    setlocale(LC_CTYPE, "Russian");
    using namespace std;
    int a = 5, b = 123;
    cout << setw(10) << a << endl;
    cout << setw(10) << b << endl;
}