//using if else calculator

#include<iostream>
using namespace std;
int main(){

    int a,b;
    char ch;

    cout<<"Enter the two numbers:";
    cin>>a>>b;

    cout<<"Enter the operation";
    cin>>ch;

    if(ch=='+'){
        cout<<a+b<<endl;
    }
    else if(ch=='-'){
        cout<<a-b<<endl;
    }
    else if(ch=='*'){
        cout<<a*b<<endl;
    }
    else if(ch=='/'){
        cout<<a/b<<endl;
    }
    else{
        cout<<"Invalid operation"<<endl;
    }
    


}