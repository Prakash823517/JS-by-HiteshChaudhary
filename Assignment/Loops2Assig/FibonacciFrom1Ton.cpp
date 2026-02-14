#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int a = 1,b = 1, fib = 1;
    cout<<fib<<endl;
    cout<<fib<<endl;
    
    for(int i=1; i<=n-2; i++){
        fib = a+b;
        a = b;
        b = fib;
        cout<<fib<<endl;

    }
}