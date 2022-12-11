#include <iostream>
#include <string>
using namespace std;

int Cube(int a);

int main()
{
    int a = 5, b = 7;
    int sum = a + b;
    cout << sum << endl;

    int mult = a * b;
    cout << mult << endl;

    int* ptr = &a;
    cout << ptr << endl;

    int square = a * a;
    cout << square << endl;

    cout << Cube(a);
}

int Cube(int a)
{
    return a * a * a;
}

