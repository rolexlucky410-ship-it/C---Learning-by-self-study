#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

void printResult(string op, int result)
{
    cout << op << " = " << result << endl;
}
int main()
{
    int x = 20, y = 4;

    printResult("20 + 4", add(x, y));
}