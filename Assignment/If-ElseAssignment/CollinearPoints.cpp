#include<iostream>
using namespace std;
int main(){
    float x1,x2,x3,y1,y2,y3;
    cout<<"Enter 1st point coordinates : ";
    cin>>x1>>y1;
    cout<<"Enter 2nd point coordinates : ";
    cin>>x2>>y2;
    cout<<"Enter 3rd point coordinates : ";
    cin>>x3>>y3;
    float m1 = (y1-y2)/(x1-x2);
    float m2 = (y2-y3)/(x2-x3);
    if(m1==m2){
        cout<<"collinear points";
    }
    else{
        cout<<"non collinear points";
    }

}