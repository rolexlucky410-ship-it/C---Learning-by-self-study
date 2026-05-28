#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    int score;

    cout << "Enter student name : ";
    getline(cin, name);

    cout << "Enter score (0-100) : ";
    cin >> score;

    cout << "\n----- Result -----" << endl;
    cout << "Student: " << name << endl;
    cout << "Score  : " << score << endl;

    if (score >= 90)
    {
        cout << "Grade  : A" << endl;
        cout << "Status : Excellent!" << endl;
    }
    else if (score >= 80)
    {
        cout << "Grade  : B" << endl;
        cout << "Status : Good!" << endl;
    }
    else if (score >= 70)
    {
        cout << "Grade  : C" << endl;
        cout << "Status : Average" << endl;
    }
    else if (score >= 60)
    {
        cout << "Grade  : D" << endl;
        cout << "Status : Below average" << endl;
    }
    else
    {
        cout << "Grade  : F" << endl;
        cout << "Status : Failed" << endl;
    }

    return 0;
}