#include <iostream>
#include <stdlib.h> 
using namespace std;


int main()
{
    int r,le,l,b;
    shape *s1;
    cout<<"Enter radius of circle:";
    cin>>r;
    circle c1(r);
    cout<<"Enter length of square:";
    cin>>le;
    square sq1(le);
    cout<<"Enter length and breadth of rectangle:";
    cin>>l>>b;
    rectangle r1(l,b);

    s1 = &c1;  
    int a1 =s1->calcarea();  

    s1 = &sq1;  
    int a2 = s1->calcarea();  

    s1 = &r1;  
    int a3 = s1->calcarea();  
    system("cls"); 
    std::cout << "Area of the circle is " <<a1<< std::endl;  
    std::cout << "Area of the square is " <<a2<< std::endl;  
    std::cout << "Area of the rectangle is " <<a3<< std::endl;  
    return 0;
}
class shape{
    public:
    virtual int calcarea() = 0;
};
class circle : public shape{
    int r;
    public:
    circle(int rad){
        r = rad;
    }
    int calcarea(){
        return 3.14 * r * r;
    }
};
class square : public shape{
    int s;
    public:
    square(int len){
        s = len;
    }
    int calcarea(){
        return s * s;
    }
};
class rectangle : public shape{
    int l,b;
    public:
    rectangle(int length,int breadth){
        l = length;
        b = breadth;
    }
    int calcarea(){
        return l * b;
    }
};


