#include <iostream>
using namespace std;

int main(){
    
    int a,b;
    cout<<"Input two numbers:";
    cin>>a>>b;

    char op;
    cout<<"Enter the operation:";
    cin>>op;

    switch(op)
    {
        case '+':
        cout<<a+b<<endl;
        break;

        case '-':
        cout<<a-b<<endl;
        break;

        case '*':
        cout<<a*b<<endl;
        break;

        case '/':
        cout<<a/b<<endl;
        break;

        default:
        cout<<"Invalid opertaion"<<endl;
        break;

        
    }
    
    return 0;
}