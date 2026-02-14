#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;
    int nsp = n-1;
    int nst = 1;
    for(int i=1; i<=2*n-1; i++){
        for(int j=1; j<=nsp; j++){
            cout<<" ";
        }

        if(i<=n-1) nsp--;
        else nsp++;
        
        for(int k=1; k<=nst; k++){
            cout<<"*";
        }

        if(i<=n-1)  nst += 2;
        else nst -= 2;
        // if(i>=n){
        //     nsp++;
        //     nst -= 2;
        // }
        // else{
        //     nsp--;
        //     nst += 2;
        // }
      
        cout<<endl;
    }




    // int nsp = n-1;
    // int nst = 1;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=nsp; j++){
    //         cout<<" ";
    //     }
    //     nsp--;
    //     for(int k=1; k<=nst; k++){
    //         cout<<"*";
    //     }
    //     nst += 2;
    // cout<<endl;
    // }
    // nsp = 1;
    // nst =2*n-3;
    // for(int i=1; i<=n-1; i++){
    //     for(int j=1; j<=nsp; j++){
    //         cout<<" ";
    //     }
    //     nsp++;
    //     for(int k=1; k<=nst; k++){
    //         cout<<"*";
    //     }
    //     nst -= 2;
    // cout<<endl;
    // }

    
}