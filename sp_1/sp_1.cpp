#include <iostream>
using namespace std;


int main()
{
    int a = 5, b = 7;
    int sum = a + b;
    cout << sum << endl;

    int mult = a * b;
    cout << mult << endl;

    int* ptr = &a;
    cout << ptr << endl;

    int cube = a * a * a;
    cout << cube;
}

