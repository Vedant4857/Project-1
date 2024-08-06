#include <iostream>
using namespace std;

template <typename T>

void swapp(T a, T b)
{
    T c = a;
    a = b;
    b = c;
    cout << "After swapping: X=" << a << " Y=" << b;
}

int main()
{
    int x, y;
    cout << "Enter the two numbers:";
    cin >> x >> y;
    try
    {
        if (y == 0)
        {
            throw(y);
        }
        cout << "Division:" << x / y;
    }
    catch (int e)
    {
        cout << "Not divisible by zero";
    }
}
