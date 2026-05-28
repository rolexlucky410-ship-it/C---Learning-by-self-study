#include <iostream>
using namespace std;

int main()
{
    float a, b, c;

    cout << "Enter a value : ";
    cin >> a;

    cout << "Enter b value : ";
    cin >> b;

    cout << "Enter c value : ";
    cin >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << "Maximum = A";
        }
        else
        {
            cout << "Maximum = C";
        }
    }
    else
    {
        if (b > c)
        {
            cout << "Maximum = B";
        }
        else
        {
            cout << "Maximum = C";
        }
    }
    return 0;
}