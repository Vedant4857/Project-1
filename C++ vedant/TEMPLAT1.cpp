#include <iostream>
using namespace std;

template <typename T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x, y;
    cout << "Enter the two numbers:";
    cin >> x >> y;

    cout << "Value before swapping x=" << x << " y=" << y << endl;

    swapp(x, y);

    cout << "Value after swapping x=" << x << " y=" << y;

    return 0;
}
