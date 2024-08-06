
#include<iostream>
using namespace std;

int sum(int n){

    int sum;
    sum = ((n)*(n+1))/2;

    return sum;
}

int main(){

    int n;
    cout<<"Enter the value of n:";
    cin>>n;

    int x = sum(n);

    cout<<"Sum:"<<x;

    return 0;
}