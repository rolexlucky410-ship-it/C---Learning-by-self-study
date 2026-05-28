#include <iostream>
using namespace std;

int main()
{
    int i = 10;  // i ធំជាង 5 រួចហើយ

    do
    {
        cout << "This runs at least once: " << i << endl;
        i++;
    } while (i <= 5); // condition មិនពិត ប៉ុន្តែ print បានម្តងហើយ

    return 0;
}