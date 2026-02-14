#include<bits/stdc++.h>
using namespace std;
void explainMultiSet(){
    multiset<int>ms;
    ms.insert(1); //{1}
    ms.insert(1);//{1,1}
    ms.insert(1);//{1,1,1}

    ms.erase(1); // all 1's erased

    int cnt = ms.count(1);
    // only a single one erased

    ms.erase(ms.find(1)); // it will erase only one 1

    //ms.erase(ms.find(1), ms.find(1) + 2);
    // it will erase two 1

    
    //rest all function same as set
}

int main(){

}