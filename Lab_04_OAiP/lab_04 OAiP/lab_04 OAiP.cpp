#include <iostream>
void main()
{
    setlocale(LC_CTYPE, "Russian");
    using namespace std;
    char sym;
    cout << "Введите символ для заливки трапеции: ";
    cin >> sym;

    int width = 10;
    int top = 1;
    int rows = 6;
    cout << "\nПотоковый вывод (cout)\n\n";

    for (int i = 0; i < rows; i++)
    {
        int cur = top + (width - top) * i / (rows - 1);
        int spaces = (width - cur) / 2;

        for (int j = 0; j < spaces; j++)
            cout << ' ';
        for (int j = 0; j < cur; j++)
            cout << sym;
        cout << endl;
    }
    printf("\nФорматированный вывод (printf)\n\n");

    for (int i = 0; i < rows; i++)
    {
        int cur = top + (width - top) * i / (rows - 1);
        int spaces = (width - cur) / 2;

        printf("%*s %d", spaces , "", spaces); 
        for (int j = 0; j < cur; j++)
            printf("%c", sym);
        printf("\n");
    }
}