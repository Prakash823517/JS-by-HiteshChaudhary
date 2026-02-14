#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=2; i<n; i++){
        if(n%i==0){
            cout<<"composite number";
            break;  // break use karne se if n ke multiple factor ho to composite number multiple times print nshi hoga
            
        }
    }
}