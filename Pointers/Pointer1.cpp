#include<iostream>
using namespace std;
int main(){
    int x = 4;
    //int *p = &x;
    int* p = &x;
    cout<<&x<<endl;
    cout<<p<<endl;
    float y = 4.9;
    float* ptr = &y;
    cout<<ptr<<endl;
    cout<<&y;
}