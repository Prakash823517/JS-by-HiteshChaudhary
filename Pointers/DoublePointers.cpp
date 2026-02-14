#include<iostream>
using namespace std;
int main(){
    int x = 5;
    int* ptr = &x;
    int** p = &ptr;
    cout<<ptr<<endl;
    cout<<&x<<endl;
    cout<<*ptr<<endl<<endl;
    cout<<p<<endl;
    cout<<&ptr<<endl;
    cout<<**p<<endl;
}
