#include<iostream>
using namespace std;
void fun(int x, int y){
    cout<<"Adress of fun x : "<<&x<<endl;
    cout<<"Adress of fun y : "<<&y;
}
int main(){
    int x = 3;
    int y = 3;
    cout<<"Adress of main x : "<<&x<<endl;
    cout<<"Adress of main y : "<<&y<<endl;
    fun(x,y);
}