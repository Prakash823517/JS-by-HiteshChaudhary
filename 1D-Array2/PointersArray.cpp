#include<iostream>
using namespace std;
int main(){
        int arr[] = {4,2,6,1,7};
        int* ptr = arr;
        for(int i=0; i<=4; i++){
            cout<<*ptr<<" ";
            ptr++;
        }
        ptr = arr; //ptr[0] = 8
        *ptr = 8;
        ptr++;
        *ptr = 9;
        ptr--;
        cout<<endl;
        for(int i=0; i<=4; i++){
            cout<<*ptr<<" ";
            ptr++;
        }
        ptr = arr;

    }


    // int arr[] = {4,2,6,1,7};
    // int* ptr = arr;
    // for(int i=0; i<=4; i++){
    //     cout<<*ptr<<" ";
    //     ptr++;  // after one time increament address will be shift by 4 byte so we can access next element of the array
        

    // }



    // int arr[] = {4,2,6,1,7};
    // //int* ptr = &arr[0];  //if we provide the address of an array to a pointer then it can use and apply some chages into the array according to its needs 
    // int* ptr = arr;    // this pointer can access the entire array
    // cout<<ptr<<endl;
    // ptr[0] = 8;
    // for(int i=0; i<=4; i++){
    //     cout<<ptr[i]<<" ";
    //     //cout<<arr[i]<<" ";

    // }
    

//}