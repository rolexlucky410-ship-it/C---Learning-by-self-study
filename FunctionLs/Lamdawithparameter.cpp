#include <iostream>
using namespace std;
int main()
{
    auto add = [](int a, int b)
    {
        return a + b;
    };

    auto multiply = [](int a, int b)
    {
        return a * b;
    };

    cout << "3 + 4 = " << add(3, 4) << endl;      // 7
    cout << "3 * 4 = " << multiply(3, 4) << endl; // 12

    return 0;
}