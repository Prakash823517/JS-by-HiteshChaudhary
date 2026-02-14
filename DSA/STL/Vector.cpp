#include<bits/stdc++.h>
using namespace std;
void explainVector(){
    vector<int> v;
    v.push_back(1); 
    v.emplace_back(2);

    vector<pair<int, int>>  vec;
    vec.push_back({1,2});
    vec.emplace_back(2,3);

    vector<int> v(5,100);
    
    vector<int> v(5);

    vector<int> v1(5,20);
    vector<int> v2(v1);


    vector<int> ::iterator it = v.begin();
    it++;
    cout<< *(it) <<" ";

    it = it+2;
    cout<<*(it)<<" ";

    vector<int>::iterator it = v.end();
    //vector<int>:: iterator it = v.rend();
    //vector<int>::iterator it = v.rbegin();  //less useful

    cout<<v[0]<< " "<<v.at(0);
    cout<<v.back()<<" ";



    //way of printing the vector element
    for(vector<int>:: iterator it = v.begin(); it != v.end(); it++){
        cout << *(it) <<" ";
    }

    //second method
    for(auto it = v.begin(); it != v.end(); it++){
        cout<<*(it) <<" ";

    }
    //third method
    for(auto it:v){
        cout<<it<<" ";
    }

    //for deletion of element
    //{10, 20, 12, 23}
    v.erase(v.begin() + 1);  // 20 will delete

    //{10,20,12,23,35}
    v.erase(v.begin() + 2, v.begin() + 4);  //12,23 will be delete bcz we are deleting using address so 35 will not delete
    //{10,20,35} [start,end)

    //insert function
    vector<int>v(2,100); //{100,100}

    //it will add 300 in the begining of vector
    v.insert(v.begin(), 300); //{300,100,100}
    v.insert(v.begin()+1, 5); //{300,5,100,100}
    v.insert(v.begin()+1, 2, 10);//{300,10,10,5,100,100}

    vector<int> copy(2,50);  //{50,50}
    v.insert(v.begin(), copy.begin(), copy.end()); //{50,50,300,10,10,5,100,100}

    //{10,20}
    cout<<v.size(); //2

    //{10,20}
    v.pop_back(); //{10}

    //v1 -> {10,20}
    //v2 -> {30,40}
    v1.swap(v2); //v1 -> {30,40}, v2 -> { 10,20}
    
    v.clear(); // it erases the entire vector and makes it empty

    cout<<v.empty();

}


int main(){


}