#include <iostream>
using namespace std;

int main()
{
    int scores[5] = {85, 90, 78, 95, 60};
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        sum = sum + scores[i]; // បូករាល់តម្លៃ
    }

    double average = sum / 5.0; // ចែកជា​​ 5.0 ដើម្បីបានទសភាគ

    cout << "Sum      = " << sum << endl;
    cout << "Average  = " << average << endl;

    return 0;
}