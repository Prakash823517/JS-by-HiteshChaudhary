#include<iostream>
using namespace std;
int main(){
    int x = 12;
    int* p = &x;
    cout<<*p<<endl;
    x = 90;
    cout<<p<<endl;
    cout<<*p<<endl;
    *p = 8;
    cout<<p<<endl;
    cout<<x<<endl;
    cout<<*p;

}