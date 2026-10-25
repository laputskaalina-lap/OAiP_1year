#include <iostream>



void main()
{
    setlocale(LC_CTYPE, "Russian");
    using namespace std;
        char s;
        int r = 5;
        cout << "Введите символ для круга: ";
        cin >> s;
        for (int y = -r; y <= r; y++)
        {
            for (int x = -r; x <= r; x++)
            {
                int d = x * x + y * y;

                if (d >= 21 && d <= 30)
                    cout << s;
                else
                    cout << ' ';
            }
            cout << endl;
        }
    }
