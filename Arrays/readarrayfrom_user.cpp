#include <iostream>
using namespace std;

int main()
{
    int scores[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter score " << i + 1 << ": ";
        cin >> scores[i];
    }

    cout << "\n--- Your scores ---" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Score " << i + 1 << " : " << scores[i] << endl;
    }

    return 0;
}