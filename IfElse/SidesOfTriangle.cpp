#include<iostream>
using namespace std;
int main(){
    int s1,s2,s3;
    cout<<"Enter first side of trisngle : ";
    cin>>s1;
    cout<<"Enter second side of trisngle : ";
    cin>>s2;
    cout<<"Enter third side of trisngle : ";
    cin>>s3;
    if((s1 + s2 > s3) && (s2 + s3 > s1) && (s3 + s1 > s2)){
        cout<<s1<<","<<s2<<","<<s3<<" can be the sides of triangle";
    }
    else{
        cout<<"Triangle is not possible";
    }
}