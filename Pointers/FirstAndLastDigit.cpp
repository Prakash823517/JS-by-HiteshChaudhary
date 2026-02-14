#include<iostream>
using namespace std;
void find(int n, int* ptr1, int* ptr2){
    *ptr2 = n%10;
    while(n>9){
        n/=10;
    }
    *ptr1 = n;
    return;
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int firstDigit,lastDigit;
    int* ptr1 = &firstDigit;
    int* ptr2 = &lastDigit;
    find(n,ptr1,ptr2);
    cout<<firstDigit<<" "<<lastDigit;
}




//method 2
// void fun(int n){
//     int ld = n%10;
//     cout<<"Last digit is : "<<ld<<endl;
//     int a;
//     while(n>0){
//         a = n%10;
//         n = n/10;
//     }
//     cout<<"First digit is : "<<a;
// }
// int main(){
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;
//     fun(n);
// }