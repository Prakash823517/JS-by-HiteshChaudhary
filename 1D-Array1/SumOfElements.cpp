#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    int sum = 0;
    cout<<"Enter elements in array : ";
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
        sum = sum + arr[i];
    }
    cout<<"Sum of array is = "<<sum;
}