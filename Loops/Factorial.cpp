//factorial of a number
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int f = 1;
    for (int i=2; i<=n; i++){
        f = f * i;
        
    }
    cout<<"Factorial of "<<n<< " is : "<<f;
}