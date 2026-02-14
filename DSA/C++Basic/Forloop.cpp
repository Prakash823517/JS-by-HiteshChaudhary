#include<iostream>
using namespace std;
int main(){
    int i ;
    for(i=1; i<=10; i++){  //if we initilize the i inside the loop then it has scope only inside the loop
        cout<<"Striver"<<i<<endl;
    }
    cout<<i<<endl;
}