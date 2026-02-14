#include<iostream>
using namespace std;
int fact(int x){
    int f = 1;
    for(int i=2; i<=x; i++){
        f = f * i;
    }
    return f;
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        cout<<fact(i)<<endl;
    }
}

// int main(){
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;
//     int factorial = 1;
//     for(int i=1; i<=n; i++){
//     factorial *= i;
//     cout<<factorial<<endl;
       
//     }
// }


