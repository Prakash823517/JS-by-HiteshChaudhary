//print the nth fibonacci number
//1 1 2 3 5 8 13 21 34 


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int a = 1,b = 1,fib = 1;
    for(int i=1; i<=n-2; i++){
        fib = a + b;
        a = b;
        b = fib;
    }
    cout<<"nth fibonacci term is : "<<fib;
    }

    // int a = 1,b = 1,fib = 0;
    //  for(int i=1; i<=n-2; i++){
    //     fib = a + b;
    //     a = b;
    //     b = fib;
    // }
    // cout<<"nth fibonacci term is : "<<b;
    // }
   
  