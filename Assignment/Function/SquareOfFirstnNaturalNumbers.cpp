#include<iostream>
using namespace std;
void square(int x){
    for(int i=1; i<=x; i++){
        cout<<"Square of "<<i<<" = "<<i*i<<endl;
    }
    return;
}
int main(){
    int n;
    cout<<"Enter number of terms : ";
    cin>>n;
    square(n);

}