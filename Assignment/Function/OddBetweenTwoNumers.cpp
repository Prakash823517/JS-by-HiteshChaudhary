#include<iostream>
using namespace std;
void odd(int a, int b){
    for(int i=min(a,b); i<=max(a,b); i++){
        if(i%2 != 0){
            cout<<i<<" ";
        }
    }
}
int main(){
    int a,b;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    odd(a,b);
}