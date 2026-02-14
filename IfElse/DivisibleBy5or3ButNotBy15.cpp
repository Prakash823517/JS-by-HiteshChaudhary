
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number : ";
    int n;
    cin>>n;
    // if((n%5 == 0 || n%3 == 0) && n%15 != 0){
    //     cout<<n<<" is divisible by 5 or 3 but not divisible by 15";
    // }
    // else{
    //     cout<<"Does not satisfy the condition";
    // }

    //method 2
    if(n%5==0 || n%3==0){
        if(n%15 != 0){
         cout<<n<<" is divisible by 5 or 3 but not divisible by 15";
         }
         else{
            cout<<"Does not satisfy the condition";
         }
    }
    else{
            cout<<"Does not satisfy the condition";
    }
}