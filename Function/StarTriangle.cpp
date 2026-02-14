#include<iostream>
using namespace std;
void starTriangle(int x){
    for(int i=1; i<=x; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
    int main(){
        starTriangle(3);  // x will assigned by 3
        cout<<"Hello world"<<endl;
        starTriangle(4);  //x will assigned by 4
        starTriangle(5);

    }
