#include<iostream>
using namespace std;
int main(){
    int count = 0;
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int a = n;

    while(n>0){
        n = n/10;
        count++;
    }
    if(a==0){
        cout<<"number of digit is : 1";
    }
    else{
    cout<<"number of digit is : "<<count;

    }
}