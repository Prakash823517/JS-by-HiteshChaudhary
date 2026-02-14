#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter age of person : ";
    cin>>age;
    if(age>=18){
        cout<<"Adult";
    }
    else{
        cout<<"Not an adult";
    }
}