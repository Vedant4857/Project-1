#include<iostream>
using namespace std;
int main(){
    int i,arr[50],n,x,y;

    cout<<"Enter the size of array:";
    cin>>n;
    
    cout<<"Enter the elements in an array:";    
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Enter the index for insertion:";
    cin>>x;

    cout<<"Enter the element for insertion:";
    cin>>y;

    for(i=n;i>x;i--){
        arr[i]=arr[i-1];
    }
    arr[x]=y;

     for(i=0;i<=n;i++){
        cout<<arr[i]<<"\t";
    }

     return 0;
}