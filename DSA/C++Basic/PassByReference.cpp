#include<iostream>
using namespace std;
// void doSomthing(string &s){
//    s[0] = 't';
//    cout<< s <<endl;
// }
// int main(){
//     string s = "Raj";
//     doSomthing(s);
//     cout<< s << endl;
// }


void doSomthing(int &num){  // only by attaching & sign address of the variable will pass
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout<< num << endl;

}
int main(){
    int num = 10;
    doSomthing(num);
    cout<< num << endl;
}