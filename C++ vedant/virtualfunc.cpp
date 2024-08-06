#include <iostream>
using namespace std;

class base
{
public:
    unsigned int a, b;
    virtual void func1()
    {
        cout << "This is base 1";
    }
    void func2()
    {
        cout << "This is base 2";
    }
    virtual void func3()
    {
        cout << "This is base 3";
    }
};

class derived : public base
{
public:
    void func1()
    {
        cout << "This is derived 1";
    }
    void func2()
    {
        cout << "This is derived 2";
    }
    void func3()
    {
        cout << "This is derived 3";
    }
};

int main()
{
    base *v1;
    derived s1;
    v1 = &s1;

    v1->func1();
    v1->func2();
    v1->func3();

    return 0;
}
