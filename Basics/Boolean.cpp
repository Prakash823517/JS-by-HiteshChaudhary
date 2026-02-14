 #include<iostream>
 using namespace std;
 int main(){
     bool flag1 = false;
     bool flag2 = true;
     bool flag3 = 1;
     bool flag4 = 0;
     bool flag5 = 9;
     bool flag6 = -3;
     cout<<flag1<<endl;
     cout<<flag2<<endl;
     cout<<flag3<<endl;
     cout<<flag4<<endl;
     cout<<flag5<<endl;
     cout<<flag6<<endl;

    

 }    




// #include <iostream>
// #include <list>


// int findLastPersonStanding(int n) {
//     // Create a list to store people from 1 to n
//     std::list<int> people;
//     for (int i = 1; i <= n; ++i) {
//         people.push_back(i);
//     }

//     auto sword = people.begin(); // Start from the first person
    
//     // Continue until only one person remains
//     while (people.size() > 1) {
//         // Move to the person who will be killed next
//         auto next = std::next(sword);
//         if (next == people.end()) {
//             next = people.begin(); // Wrap around if we reach the end
//         }

//         // Remove the next person
//         people.erase(next);

//         // Move the sword to the next person
//         if (sword == people.end()) {
//             sword = people.begin(); // Wrap around if sword is at the end
//         } else {
//             sword = std::next(sword);
//             if (sword == people.end()) {
//                 sword = people.begin(); // Wrap around if we reach the end
//             }
//         }
//     }

//     // The last remaining person
//     return people.front();
// }

// int main() {
//     int n = 100;
//     int lastPerson = findLastPersonStanding(n);
//     std::cout << "The last person standing is: " << lastPerson << std::endl;
//     return 0;
// }
