#include<iostream>
using namespace std;
int main(){
    int day;
    cin>>day;
    switch(day){
        case 1:  //if we not apply break then after hitting a condition all the bellow code will run from that condition
            cout<<"Monday";   // if we apply break then after hitting a condition will exit from entire switch case 
            break;            // after hitting a condition Hello World will not run because it is inside the switch case
        case 2:
            cout<<"Tuesday";
            break;
        case 3:
            cout<<"Wednesday";
            break;
        case 4:
            cout<<"Thrusday";
            break;
        case 5:
            cout<<"Friday";
            break;
        case 6:
            cout<<"Saturday";
            break;
        case 7:
            cout<<"Sunday";
            break;
        // default :
        //  cout<<"invalid";

        cout<<"Hello World";

    }
    cout<<endl;
    cout<<"Check";
    return 0;
}