#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character : ";
    cin>>ch;
    if((ch>='a' && ch<='z') || ch>='A' && ch<='Z'){
        cout<<"alphabet";
    }
    else{
        cout<<"not an alphabet";
    }

    // int a = (int)ch;
    // if((a>=65 && a<=90) || (a>=97 && a<=122)){
    //     cout<<ch<<" is an alphabet";
    // }
    // else{
    //     cout<<ch<<" is not an alphabet";
    // }



    // if(a>=65 && a<=90){
    //     cout<<ch<<" is an alphabet";
    // }
    // else if(a>=97 && a<=122){
    //     cout<<ch<<" is an alphabet";
    // }
    // else{
    //     cout<<ch<<" is not an alphabet";
    // }

}