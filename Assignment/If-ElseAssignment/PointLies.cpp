#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter coordinates of point : ";
    cin>>x>>y;
    if(x==0 && y!=0){
        cout<<"the point lies on y-axis";
    }
    else if(y==0 && x!=0){
        cout<<"the point lies on x-axis";
    }
    else if(x==0 && y==0){
        cout<<"the point lies on origin";
    }
    else{
        cout<<"The point lies on the plane";
    }
}