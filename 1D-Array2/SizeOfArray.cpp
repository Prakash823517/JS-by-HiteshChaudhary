#include<iostream>
using namespace std;
void display(int* a, int size){
    for(int i=0; i<=size-1; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
}
void change(int b[], int size){ //int* b
    b[0] = 100;
    cout<<size;
    cout<<endl;

}
int main(){
    int arr[5] = {1,4,2,7,46};
    int size = sizeof(arr)/sizeof(arr[3]);
    display(arr,size);   // here address of array will be transferred
    change(arr,size);
    display(arr,size);
}



// #include<iostream>
// using namespace std;
// void display(int a[], int size){
//     for(int i=0; i<=size-1; i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
//     return;
// }
// void change(int b[], int size){   //a,b are pointers and it points  arr array 
//     b[0] = 100;
//     cout<<size;
//     cout<<endl;

// }
// int main(){
//     int arr[5] = {1,4,2,7,46};
//     int size = sizeof(arr)/sizeof(arr[3]);
//     display(arr,size);   // here address of array will be transferred
//     change(arr,size);
//     display(arr,size);
// }