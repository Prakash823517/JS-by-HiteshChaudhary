#include<iostream>
using namespace std;
int main(){
    int a = 14;
    int b = 3;
    int rem;
    rem = a - (a/b) * b;
    int remainder = a % b;
    cout<<remainder<<endl;
    cout<<rem<<endl;
}

