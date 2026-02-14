#include<iostream>
using namespace std;
int countDigit(int x){
    int count = 0;
    cout<<"Square of the number is : "<<x*x<<endl;
    while(x>0){
        x = x/10;
        count++;
    }
    return count;
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"Number of digit is : "<<countDigit(n);
}