#include <iostream>
using namespace std;

int main()
{
    int scores[5] = {85, 90, 70, 65, 45}; // array of 5 integers

    cout << scores[0] << endl; // → 85  (ទីមួយ)
    cout << scores[1] << endl; // → 90  (ទីពីរ)
    cout << scores[4] << endl; // → 45  (ទីប្រាំ — ចុងក្រោយ)

    return 0;
}
// Note : index is start from 0 not 1.
// An array is a collection of values of the same type stored together under one name.