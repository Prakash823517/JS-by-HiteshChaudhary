#include<iostream>
using namespace std;
int main(){
    int x = 4,y = 0,z;
    while(x >= 0){
        x--;
        y++;
        if(x == y){
            continue; // continue means when x==y condition is true then this loop round will skip
                      //and directly we move in loop next round
                }
        else{
            cout<<x<<"  "<<y<<endl;
        }
    }
}