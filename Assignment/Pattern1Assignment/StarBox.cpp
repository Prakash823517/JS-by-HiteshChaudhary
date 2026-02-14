#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter number of rows : ";
    cin>>m;
    cout<<"Enter number of columns : ";
    cin>>n;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            if((i==2 || i==3) && (j<=5 && j>=2)){
                cout<<" ";
            }
            else{
            cout<<"*";
            }
        }
        cout<<endl;
    }

}