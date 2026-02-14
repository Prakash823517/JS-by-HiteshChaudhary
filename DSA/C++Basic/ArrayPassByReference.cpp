#include<iostream>
using namespace std;
void doSomthing(int arr[], int n){  //array always pass by reference without & sign
    arr[0] += 100;
    cout<<"Value inside function: "<<arr[0] <<endl;

}
int main(){
    int n = 5;
    int arr[n];
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }
    doSomthing(arr,n);
    cout<<"Value inside function: "<<arr[0] <<endl;

}