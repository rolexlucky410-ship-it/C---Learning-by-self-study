#include <iostream>
#include <typeinfo> // need this for typeid
using namespace std;

int main()
{
    int a = 10;
    double b = 3.14;
    string c = "Sam";
    auto d = 42; // auto will deduce the type as int

    cout << "a is: " << typeid(a).name() << endl; // prints the type of a
    cout << "b is: " << typeid(b).name() << endl; // prints the type of b
    cout << "c is:" << typeid(c).name() << endl;  // prints the type of c
    cout << "d is: " << typeid(d).name() << endl; // prints the type of d

    return 0;
}
