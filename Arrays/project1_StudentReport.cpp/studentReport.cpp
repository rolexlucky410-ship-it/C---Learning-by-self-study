#include <iostream>
#include <string>
using namespace std;

void printGrade(int score)
{
    if (score >= 90)
        cout << "A";
    else if (score >= 80)
        cout << "B";
    else if (score >= 70)
        cout << "C";
    else if (score >= 60)
        cout << "D";
    else
        cout << "F";
}

int main()
{
    string names[5];
    int scores[5];
    int sum = 0;
    int highest = 0;
    int lowest = 100;

    // input
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter name for student " << i + 1 << ": ";
        cin >> names[i];
        cout << "Enter score for student " << i + 1 << ": ";
        cin >> scores[i];
    }
    // calculate
    for (int i = 0; i < 5; i++)
    {
        sum = sum + scores[i];
        if (scores[i] > highest)
            highest = scores[i];
        if (scores[i] < lowest)
            lowest = scores[i];
    }

    double average = sum / 5.0;

    // output report
    cout << "\n===== Student Report =====" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << names[i] << "  : " << scores[i] << " (";
        printGrade(scores[i]);
        cout << ")" << endl;
    }

    cout << "---------------------------" << endl;
    cout << "Average : " << average << endl;
    cout << "Highest : " << highest << endl;
    cout << "Lowest  : " << lowest << endl;

    return 0;
}