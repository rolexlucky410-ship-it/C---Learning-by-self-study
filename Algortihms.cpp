#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
SY:
    float a, b;
    cout << "Enter a = ";
    cin >> a;

    cout << "Enter b = ";
    cin >> b;

    if (a == b)
    {
        cout << "No Maximum.";
        if (a > b)
            cout << "Maximum = a ";
        if (a < b)
            cout << "Maximum = b ";

        cout << "\n Press any key to Input Again !";
        getch();
        system("cls");
        goto SY;
        return 0;
    }
}