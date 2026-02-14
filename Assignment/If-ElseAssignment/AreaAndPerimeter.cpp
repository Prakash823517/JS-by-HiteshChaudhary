#include<iostream>
using namespace std;
int main(){
    int l,b;
    cout<<"Enter length and breadth of rectangle : ";
    cin>>l>>b;
    int area = l*b;
    int perimeter = 2*l + 2*b;
    if(area>perimeter){
        cout<<"Area is greater";
    }
    else{
        cout<<"Perimeter is greater";
    }
}