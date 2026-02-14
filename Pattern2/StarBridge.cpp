#include<iostream>
using namespace std; 
int main(){
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;
    int nsp = 1;
    for(int b=1; b<=2*n-1; b++){
        cout<<"*";
    }
    cout<<endl;
    for(int i=1; i<=n-1; i++){
        for(int j=1; j<=n-i; j++){
            cout<<"*";
        }
        for(int k=1; k<=nsp; k++){
            cout<<" ";
        }
        nsp += 2;
        for(int a=1; a<=n-i; a++){
            cout<<"*";
        }
        cout<<endl;
    }
}