#include<iostream>
using namespace std;
void swap(int &a, int &b){  //pass by reference
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int a = 6,b = 8;
    swap(a,b);
    cout<<a<<" "<<b;

}