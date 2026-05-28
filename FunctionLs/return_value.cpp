#include <iostream>
using namespace std;

// define the function ABOVE main
int add(int a, int b)
{
    return a + b;
}

int main()
{
    int result = add(10, 5); // call the function
    cout << "10 + 5 = " << result << endl;
}

// Summary :
// returnType  functionName ( parameters ) {
//     // code
//     return value;
// }

// Ex:
// int add ( int a, int b ) {
//     return a + b;
// }

// Explain :
// 1.int = return type - what it gives back.
// 2.add = function name.
// 3.int a , int b = parameters - inputs
// 4.return a + b = result sent back