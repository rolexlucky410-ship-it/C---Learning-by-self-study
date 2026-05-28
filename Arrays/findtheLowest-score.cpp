#include <iostream>
using namespace std;

int main()
{
    int scores[5] = {85, 90, 78, 95, 60};
    int lowest = scores[0];

    for (int i = 1; i < 5; i++)
    {
        if (scores[i] < lowest)
        {
            lowest = scores[i];
        }
    }

    cout << "Lowest score = " << lowest << endl;

    return 0;
}