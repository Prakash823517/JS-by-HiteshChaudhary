#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a uppercase alphabet : ";
    char character;
    cin>>character;
    cout<<"The rank of character is : ";
    cout<<(int)character - 64;
}