#include<iostream>
using namespace std;
int main(){
    string s = "Prakash";
    cout<<s[2]<<endl;
    cout<<s[0]<<endl;
    cout<<s[6]<<endl;
    int len = s.size();
    cout<<s[len-1]<<endl;
    s[len-1] = 'z';
    cout<<s[len-1]<<endl;

  
    return 0;
}