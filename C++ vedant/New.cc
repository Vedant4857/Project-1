#include<iostream>
using namespace std;

namespace Vedant{
    void Intro(){
        cout<<"My name is Vedant and i am 18 years old. I Live in Morbi currently doing my Btech"<<endl;
    }
}

namespace Kamlaj{
    void Intro(){
        cout<<"My name is Kamlaj and i am 22 years old. I Live in Morbi currently doing my MBA"<<endl;
    }
}
int main(){
   
   Vedant::Intro();
   Kamlaj::Intro();

    }
