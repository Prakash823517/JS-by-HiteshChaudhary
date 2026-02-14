#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cin >> arr[0] >>arr[1] >>arr[2] >>arr[3] >>arr[4];
    cout << arr[3] <<endl;
    arr[3] += 10;
    cout<<arr[3]<<endl;
    arr[3] = 20;
    cout<<arr[3]<<endl;

    int a[3][5];
    a[1][4] = 15;
    cout<<a[1][4];
    return 0;
}