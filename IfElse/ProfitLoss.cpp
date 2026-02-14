#include<iostream>
using namespace std;
int main(){
    cout<<"Enter selling price : ";
    int sp;
    cin>>sp;
    cout<<"Enter cost price : ";
    int cp;
    cin>>cp;
    if(sp>cp){
        cout<<sp - cp<<" is being profit";
    }if(sp<cp){
        cout<<cp - sp<<" is being loss";
    }if(sp = cp){
        cout<<"No profit no loss";
    }
}