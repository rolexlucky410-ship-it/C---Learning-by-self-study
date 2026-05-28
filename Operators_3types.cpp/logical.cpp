#include <iostream>
using namespace std;

int main()
{
    bool a = true;
    bool b = true;

    cout << (a && b) << endl; // AND (&&) : both must be true
    cout << (a || b) << endl; // OR (||) : at least one true
    cout << (!a) << endl;     // NOT (!): flip true/false

    return 0;
}
