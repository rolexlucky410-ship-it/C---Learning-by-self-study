#include <iostream>
using namespace std;

void greet(string name)
{ // void returns nothing
    cout << "Hello " << name << endl;
}

int main()
{
    greet("Seyhak"); // call it
    greet("Alex");   // call it again - reusable!
    greet("Hay");
}
// void មានន័យថាអនុគមន៍មិន return តម្លៃអ្វីទាំងអស់ — វាគ្រាន់តែធ្វើការ ហើយបញ្ចប់។