#include <iostream>
using namespace std;

int main()

{
    float a, b;
    cout << "Enter a value = ";
    cin >> a;

    cout << "Enter b value = ";
    cin >> b;

    if (a == b)
    {
        cout << "No Maximum ";
    }
    else
    {
        if (a > b)
        {
            cout << "Maximum = a";
        }
        else
        {
            cout << "Maximum = b";
        }
    }
    return 0;
}