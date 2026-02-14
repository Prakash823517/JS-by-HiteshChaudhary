//sum of series : 1-2+3-4+5-6.....upto n terms

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int sum = 0;
    if(n%2==0){
        sum = -n/2;
    }
    else{
        sum = -n/2 + n;
    }
        cout<<"sum of the series is : "<<sum;
    
    // int sum = 0;
    // for(int i=1; i<=n; i++){
    //     int a = i;
    //     if(i%2==0){
    //        a = -i;
    //     }
    //     sum = sum + a;
    // }
    // cout<<"Sum of the series is : "<<sum;


    // int sum = 0;
    // for(int i=1; i<=n; i++){
    //     if(i%2 != 0){
    //         sum = sum + i;
    //     }
    //     else{
    //         sum = sum - i;
    //     }
    // }
    //     cout<<"Sum of the series is : "<<sum;

}