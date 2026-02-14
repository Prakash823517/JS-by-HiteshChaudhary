#include<iostream>
using namespace std;
void fun(int x = 7, bool y = true){
    cout<<x<<"  "<<y;
}
int main(){
    fun(false);  
}