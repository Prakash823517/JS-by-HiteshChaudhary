#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;
    int nsp = 1;
    for(int a=1; a<=2*n-1; a++){
        cout<<a;
    }
    cout<<endl;
    for(int i=1; i<=n-1; i++){
    int t = 1;
        for(int j=1; j<=n-i; j++){
            cout<<t;
            t++;
        }
        for(int k=1; k<=nsp; k++){
            cout<<" ";
            t++;
        }
        nsp += 2;
        for(int m=1; m<=n-i; m++){
            cout<<t;
            t++;
        }        
        cout<<endl;
    }


    // for(int a=1; a<=2*n-1; a++){
    //     cout<<a;
    // }
    // cout<<endl;
    // for(int i=1; i<=n-1; i++){
    // int t = (2*n+1)/2 + i;
    //     for(int j=1; j<=n-i; j++){
    //         cout<<j;
    //     }
    //     for(int k=1; k<=nsp; k++){
    //         cout<<" ";
    //     }
    //     nsp += 2;
    //     for(int m=1; m<=n-i; m++){
    //         cout<<t;
    //         t++;
    //     }        
    //     cout<<endl;
    }
