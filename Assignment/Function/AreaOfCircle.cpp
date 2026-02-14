#include<iostream>
using namespace std;
float area(int n){
    return  3.1415 * n * n;
}
int main(){
    int r;
    cout<<"Enter radius : ";
    cin>>r;
    cout<<"area of circle is : "<<area(r);

}