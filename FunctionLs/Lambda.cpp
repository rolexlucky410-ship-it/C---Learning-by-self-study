#include <iostream>
using namespace std;

int main()
{
    // normal function approach
    // you would define a function above main - extra work

    // lambda approach - write it right here!
    auto greet = []()
    {
        cout << "Hello from the lambda function!" << endl;
    };
    greet(); // call the lambda function
    greet(); // call it again - no problem!

    return 0;
}