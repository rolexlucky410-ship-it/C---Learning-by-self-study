#include <iostream>
using namespace std;

int main()
{
    int score[5] = {85, 90, 78, 95, 60};

    for (int i = 0; i < 5; i++)
    {
        cout << "scores[" << i << "] = " << score[i] << endl;
    }

    return 0;
}