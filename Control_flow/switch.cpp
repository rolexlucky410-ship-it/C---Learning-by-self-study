#include <iostream>
using namespace std;

int main()
{
    int day = 3;

    switch (day)
    {
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuseday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "Thursday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;
    default:
        cout << "Weekend" << endl;
    }
    return 0;

    // Note :  ប្រើ switch នៅពេលអ្នកពិនិត្យអថេរមួយ ទល់នឹងតម្លៃច្រើន។
    // break សំខាន់ណាស់!
    // បើខ្វះ break C++ នឹងដំណើរការ case បន្ទាប់ទៀតបន្តបន្ទាប់គ្នា។
    // default ដំណើរការនៅពេលគ្មាន case ណាត្រូវ — ដូច else ដែរ។
}