#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"Before swapping"<<endl;
    cout<<a<<"  "<<b<<endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout<<"after swapping"<<endl;
    cout<<a<<"  "<<b;

}



// int main(){
//     int a,b;
//     cin>>a>>b;
//     cout<<"Before swapping"<<endl;
//     cout<<a<<"  "<<b<<endl;
//     int temp = a;
//     a = b;
//     b = temp;
//     cout<<"after swapping"<<endl;
//     cout<<a<<"  "<<b;

// }