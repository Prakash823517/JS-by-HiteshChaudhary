#include<iostream>
using namespace std;
int main(){
    int x,y;
    int* ptr1 = &x;
    int* ptr2 = &y;
    cin>>x>>y;
    int product = (*ptr1) * (*ptr2);
    cout<<"Product is : "<<product;
}