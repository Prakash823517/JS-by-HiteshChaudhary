#include<iostream>
using namespace std;
int maxx(int a, int b){
    if(a >= b){
        return a;
    }
    return b;  
       
    // if(a >= b)  return a;
    // else return b;
}

int main(){
    int num1,num2;
    cin>>num1>>num2;
    int minimum = min(num1,num2);
    int maximum = max(num1,num2);
    cout<<minimum<<endl;
    cout<<maximum<<endl;
    cout<<maxx(num1,num2);
}