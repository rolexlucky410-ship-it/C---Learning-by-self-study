#include <iostream>
using namespace std;

double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }

void divide(double a, double b)
{
    if (b == 0)
    {
        cout << "Error: cannot divide by zero!" << endl;
    }
    else
    {
        cout << "Result = " << a / b << endl;
    }
}

void showResult(double result)
{
    cout << "Result = " << result << endl;
}

int main()
{
    double a, b;
    char op;

    cout << "Enter first number : ";
    cin >> a;

    cout << "Enter operator (+,-,*,/): ";
    cin >> op;

    cout << "Enter second number : ";
    cin >> b;

    if (op == '+')
        showResult(add(a, b));
    else if (op == '-')
        showResult(subtract(a, b));
    else if (op == '*')
        showResult(multiply(a, b));
    else if (op == '/')
        divide(a, b);
    else
        cout << "Unknown operator!" << endl;

    return 0;
}