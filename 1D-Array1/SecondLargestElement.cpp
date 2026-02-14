#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }
    int max = INT_MIN;
    for(int i=0; i<=n-1; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    int smax = INT_MIN;
    for(int i=0; i<=n-1; i++){
        if(arr[i] != max && smax < arr[i]){
            smax = arr[i];
        }
    }
    cout<<smax<<endl;
    cout<<max;
   
}


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter size of array : ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter elsments in array"<<endl;
//     for(int i=0; i<=n-1; i++){
//         cin>>arr[i];
//     }
//     int max = arr[0];
//     for(int i=1; i<=n-1; i++){
//         if(arr[i]>max){
//             max = arr[i];
//         }
//     }
//     int smax = arr[0];
//     for(int i=1; i<=n-1; i++){
//         if(arr[i]>smax && arr[i] != max){
//             smax = arr[i];
//         }
//     }
//     cout<<smax;

// }