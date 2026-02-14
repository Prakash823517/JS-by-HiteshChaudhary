#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    //if a is initialised (int a=1) here then a will not gain a=1 value again when 1st loop run again 
        for(int i=1;i<=n;i++){
            int a = 1; // a yaha initialised karne se whenever 1st loop run again then a will be initialised by 1 again
        for(int j=1; j<=i; j++){
            cout<<a<<" ";
            a = a + 2;
        }
        cout<<endl;
    }


    //     for(int i=1;i<=n;i++){
    //     for(int j=1; j<=2*i-1; j += 2){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    // for(int i=1;i<=n;i++){
    //     for(int j=1; j<=i; j++){
    //         cout<<(2*j-1)<<" ";
    //     }
    //     cout<<endl;
    // }
}