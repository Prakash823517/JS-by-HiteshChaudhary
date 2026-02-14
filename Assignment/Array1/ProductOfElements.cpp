#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    int product = 1;
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }
    for(int i=0; i<=n-1; i++){
        product = product*arr[i];
    }
    cout<<"Product of all the elements is : "<<product;
}