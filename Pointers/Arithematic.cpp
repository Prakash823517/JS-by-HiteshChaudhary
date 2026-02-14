#include<iostream>
using namespace std;
int main(){
    int x = 7;
    int* ptr = &x;  // address 4 byte shift hoga 
    cout<<ptr<<endl;
    ptr = ptr + 1;
    cout<<ptr<<endl;


    bool flag = true;  //address 1 byte shift hoga
    bool* p = &flag;
    cout<<p<<endl;
    p = p+1;
    cout<<p<<endl;
}