#include<iostream>
using namespace std;
int maxthree(int a, int b, int c){
    if(a>b && a>c){
        return  a;
    }
    else if(b>a && b>c){
        return  b;
    }
    else{
        return  c;  // jo return statement run hoga uske niche ka code run nahi hoga
    }               //iss code me return a; ke niche ka code run nahi hoga
}
int main(){
    int a = 20,b = 5,c = 7;
    cout<<maxthree(a,b,c);
}


// int maxthree(int a, int b, int c){
//     int max;
//     if(a>b && a>c){
//         max = a;
//     }
//     else if(b>a && b>c){
//         max = b;
//     }
//     else{
//         max = c;
//     }
//     return max;
// }
// int main(){
//     int a = 2,b = 58,c = 7;
//     cout<<maxthree(a,b,c);
// }