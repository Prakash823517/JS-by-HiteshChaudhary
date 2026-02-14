#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a character : ";
    char ch;
    cin>>ch;
    if((ch>='a' && ch<='z')|| (ch>='A' && ch<='Z')){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch =='I' ||ch=='O' || ch=='U'){
        cout<<ch<<" is a vowel";
    }
       else{
        cout<<ch<<" is a consonant"; 
        }
    }
    else{
        cout<<ch<<" is not a character";
    }

}