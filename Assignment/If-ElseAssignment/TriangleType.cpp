#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter sides of triangle : ";
    cin>>a>>b>>c;
    if(a==b && a==c){
        cout<<"equilateral triangle";
    }
    else if(a==b || a==c || b==c){
        cout<<"isosceles triangle";
    }
    else{
        cout<<"scalene triangle";
    }
}