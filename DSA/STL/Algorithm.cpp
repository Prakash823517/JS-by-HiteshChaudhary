#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> p1, pair<int,int> p2){
    // self written comprator function
    // sort it according to second element
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    // if second element is same

    if(p1.first > p2.second) return true;
    return false;
}
void explainExtra(){
    ////sort(a, a+n);
    ////sort(v.begin(), v.end());
    ////sort(a+2,a+4);
    ////sort(a+2,a+4);
    ////sort(a, a+n, greater<int>);

    pair<int,int>  a[] = {{1,2}, {2,1}, {4,1}};
    // sort it accending to second element
    // if second element is same, then sort
    // it accending to first element but in decending

    ////sort(a,a+n,comp);
    //{{4,1}, {2,1}, {1,2}}


    int num = 7;
    ////int cnt = _builtin_popcount(num); //3

    long long num = 167883463;
    // if no. is long long then _builtin_popcountll(num) is used
    ////int cnt = _builtin_popcountll(num);


    // for printing all the permutation in sorted order
    string s = "123";
    sort(s.begin(), s.end());
    do{
        cout<<s<<endl;

    }while(next_permutation(s.begin(), s.end()));

    //for finding maximum element in a array
    ////int maxi = *max_element(a,a+n);


}
int main(){

}