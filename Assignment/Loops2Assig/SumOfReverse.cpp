#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int a = n;
    int ld = 0,reverse = 0;
    while(n>0){
        ld = n%10;
        reverse = 10*reverse;
        reverse = reverse + ld;
        n = n/10;
    }
    cout<<"result = "<<reverse + a ;
}