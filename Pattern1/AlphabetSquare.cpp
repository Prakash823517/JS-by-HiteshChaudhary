#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of sides : ";
    cin>>n;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n; j++){
    //         cout<<(char)(j+64)<<" ";
    //     }
    //     cout<<endl;
    // }


    for(int i=1; i<=n; i++){
        char ch = 'A';
        for(int j=1; j<=n; j++){
            cout<<ch<<" ";
            ch =(char) (ch + 1);
        }
        cout<<endl;
    }
}