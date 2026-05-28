#include <iostream>
using namespace std;

struct Animal
{
    virtual void speak()
    { // virtual = can be overridden
        cout << "..." << endl;
    }
};

struct Dog : Animal
{
    void speak() override
    {
        cout << "Woof!" << endl;
    }
};

struct Cat : Animal
{
    void speak() override
    {
        cout << "Meow!" << endl;
    }
};

int main()
{
    Animal *pet; // one pointer — can hold Dog OR Cat

    Dog d;
    Cat c;

    pet = &d;
    pet->speak(); // → Woof!  (decided at runtime!)

    pet = &c;
    pet->speak(); // → Meow!  (decided at runtime!)

    return 0;
}

// pet អាចចង្អុលទៅ Dog ឬ Cat — C++ សម្រេចចិត្ត នៅពេល runtime ថា speak() version ណាត្រូវហៅ។
// នេះជា dynamic behavior នៅក្នុង C++។
//  យើងនឹងរៀនរឿងនេះ ស៊ីជម្រៅនៅ Stage 12 OOP ។