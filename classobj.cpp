#include <iostream>
using namespace std;

class Complex
{
private:
    float real;
    float imag;

public:
    // Constructor
    Complex(float r = 0.0, float i = 0.0) : real(r), imag(i) {}

    // Overloading the subtraction operator (-)
    Complex operator-(const Complex &other)
    {
        Complex temp;
        temp.real = real - other.real;
        temp.imag = imag - other.imag;
        return temp;
    }

    // Display the complex number
    void display()
    {
        cout << "Result: " << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex num1(4.5, 2.0); // First complex number: 4.5 + 2.0i
    Complex num2(1.5, 3.0); // Second complex number: 1.5 + 3.0i

    // Subtracting num2 from num1
    Complex result = num1 - num2;

    // Display the result
    result.display();

    return 0;
}
