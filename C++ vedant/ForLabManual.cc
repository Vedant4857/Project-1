#include <iostream>
using namespace std;

int main(){
    int sec,hours,min;
    cout<<"Enter the seconds:";
    cin>>sec;

    hours=sec/3600;
    min=(sec-(hours*3600))/60;
    sec=sec-(3600*hours)-(60*min);

    cout<<hours<<":"<<min<<":"<<sec;
}