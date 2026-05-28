#include <iostream>
using namespace std;

int main(){
    int x = 10;
    int y = 20;

    cout << (x == y) << endl;    // ស្មើ?     → 0 (false)
    cout << (x != y) << endl;    // មិនស្មើ?  → 1 (true)
    cout << (x < y) << endl;     // តូចជាង? → 1 (true)
    cout << (x > y) << endl;     // ធំជាង?  → 0 (false)
    cout << (x <= y) << endl;    // តូចជាង ឬស្មើ? → 1 (true)
    cout << (x >= y) << endl;    // ធំជាង ឬស្មើ?  → 0 (false)

    return 0;
      
}