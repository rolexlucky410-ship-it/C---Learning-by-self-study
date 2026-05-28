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
            cout << "Maximum A = " << a;
        }
        else
        {
            cout << "Maximum C = " << c;
        }
    }
    else
    {
        if (b > c)
        {
            cout << "Maximum B = " << b;
        }
        else
        {
            cout << "Maximum C = " << c;
        }
    }

    return 0;
}