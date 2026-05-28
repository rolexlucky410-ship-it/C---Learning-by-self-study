#include <iostream>
using namespace std;

void print(int x) { cout << "Result (int)      : " << x << endl; }
void print(double x) { cout << "Result (double): " << x << endl; }
void print(string x) { cout << "Result (string): " << x << endl; }

int main()
{
    // lambda for simple math
    auto add = [](double a, double b)
    { return a + b; };
    auto subtract = [](double a, double b)
    { return a - b; };
    auto multiply = [](double a, double b)
    { return a * b; };

    double a, b;
    cout << "Enter first number :";
    cin >> a;
    cout << "Enter second number :";
    cin >> b;

    print(add(a, b));
    print(subtract(a, b));
    print(multiply(a, b));

    if (b == 0)
        print(string("Cannot divide by zero"));
    else
        print(a / b);

    return 0;
}
