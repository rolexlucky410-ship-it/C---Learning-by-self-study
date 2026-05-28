// auto - let the compiler figure out the type for you.
// auto ប្រាប់ C++ ឱ្យកំណត់ប្រភេទដោយស្វ័យប្រវត្តិ ពីតម្លៃដែលអ្នកដាក់។ ប្រភេទនៅតែ ថេរនៅ compile time — auto គ្រាន់តែសន្សំពេលវេលាសរសេរ។
#include <iostream>
using namespace std;

int main()
{
    auto age = 20;               // age is an int
    auto price = 19.99;          // price is a double
    auto name = string("Alice"); // name is a string
    auto letter = 'A';           // letter is a char
    auto passed = true;          // passed is a bool

    cout << "Age: " << age << endl;
    cout << "Price: " << price << endl;
    cout << "Name: " << name << endl;
    cout << "Letter: " << letter << endl;
    cout << "Passed: " << passed << endl;

    return 0;
}
// auto ប្រាប់ C++ ឱ្យកំណត់ប្រភេទដោយស្វ័យប្រវត្តិ ពីតម្លៃដែលអ្នកដាក់។
//  ប្រភេទនៅតែ ថេរនៅ compile time — auto គ្រាន់តែសន្សំពេលវេលាសរសេរ។