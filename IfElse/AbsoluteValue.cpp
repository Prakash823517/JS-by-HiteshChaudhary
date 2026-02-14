#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number : ";
    int n;
    cin>>n;
    if(n < 0){
        n = -n;
    }
    cout<<"The absolute value is : "<<n;
}