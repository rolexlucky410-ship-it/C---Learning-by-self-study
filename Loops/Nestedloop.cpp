#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            cout << i << "x" << j << "=" << i * j << " ";
        }
        cout << endl;
    }
    return 0;
}
// Note : loop ខាងក្រៅគ្រប់គ្រង row, loop ខាងក្នុងគ្រប់គ្រង column។ នេះជា pattern ដ៏សំខាន់ក្នុង algorithms!