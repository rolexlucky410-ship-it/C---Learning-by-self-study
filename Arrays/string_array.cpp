#include <iostream>
#include <string>
using namespace std;

int main()
{
    string names[4] = {"Seyhak", "Hay", "Dara", "Sour"};

    for (int i = 0; i < 4; i++)
    {
        cout << i + 1 << ". " << names[i] << endl;
    }

    return 0;
}
