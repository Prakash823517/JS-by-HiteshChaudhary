#include<iostream>
using namespace std;
void explainPair(){
    pair<int, int> p={1,3};
    cout<<p.first<<" "<<p.second;
    cout<<endl;

    pair<int,pair<int, int>>  pa={1, {2,3}};
    cout<<pa.first<<" "<<pa.second.second<<" "<<pa.second.first;
    cout<<endl;
    
    pair<int, int>  arr[] = {{1,2}, {2,5}, {5,1}};
    cout<<arr[1].second;
}
int main(){
    explainPair();
}