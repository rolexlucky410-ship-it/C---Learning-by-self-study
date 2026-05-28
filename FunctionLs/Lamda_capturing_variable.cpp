#include <iostream>
using namespace std;
int main()
{
    int tax = 10; // variable outside the lambda

    // [tax] means: capture (borrow) the variable tax
    auto addTax = [tax](int price)
    {
        return price + tax;
    };

    cout << "Price with tax: " << addTax(100) << endl; // 110
    cout << "Price with tax: " << addTax(200) << endl; // 210

    return 0;
}