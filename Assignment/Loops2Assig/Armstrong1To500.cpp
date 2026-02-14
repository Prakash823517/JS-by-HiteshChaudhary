#include<iostream>
using namespace std;
int main(){
    for(int i=1; i<=500; i++){
        int arms = 0;
        int a = i;
        while(a>0){
            int ld = a%10;
            arms = arms + ld*ld*ld; 
            a = a/10;
        }
        if(i==arms){
            cout<<i<<endl;
        }

    }
}