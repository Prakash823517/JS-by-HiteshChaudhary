#include<iostream>
using namespace std;
int main(){
    int ld = 0,sum =0,n;
    cout<<"Enter a number : ";
    cin>>n;
    while(n>0){
        ld = n%10;
        if(ld%2==0){
            sum = sum + ld;
        }
        n = n/10;
    }
    cout<<"sum of even digits is : "<<sum;
}