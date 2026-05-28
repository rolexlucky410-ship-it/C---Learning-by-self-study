#include <iostream>
using namespace std;

// same name "add" — but different parameters
int add(int a, int b)
{
    return a + b;
}

double add(double a, double b)
{
    return a + b;
}

int add(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    cout << add(3, 4) << endl;     // calls int version    → 7
    cout << add(1.5, 2.3) << endl; // calls double version → 3.8
    cout << add(1, 2, 3) << endl;  // calls 3-param version → 6
    return 0;
}