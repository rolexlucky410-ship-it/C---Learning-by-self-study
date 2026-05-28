#include <iostream>
using namespace std;

int main()
{
    int scores[5] = {100, 90, 78, 95, 120};
    int highest = scores[0]; // សន្មតថា index 0 ខ្ពស់បំផុតជាមុន

    for (int i = 1; i < 5; i++)
    {
        if (scores[i] > highest)
        {
            highest = scores[i]; // បើឃើញខ្ពស់ជាង ផ្លាស់ប្តូរ
        }
    }
    cout << "Hightest score = " << highest << endl;

    return 0;
}
