#include<iostream>
using namespace std;
int main(){
for(int i=1; i<=20; i++){
    if(i%2==0){
        continue; //continue statement is used to skip round/iteration of loop
    }
    cout<<i<<endl; //so only odd no. will print even no round will skip
    }
}