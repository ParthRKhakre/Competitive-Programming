#include<bits/stdc++.h>
using namespace std;
int main(){

  // a multiset is similar to a set, but it allows duplicate elements.
  // It is defined in <set>.

    multiset<int> ms;

    ms.insert(1); // 1
    ms.insert(1); // 1 1 
    ms.insert(2); // 1 1 2
    ms.insert(4); // 1 1 2 4
    ms.insert(6); // 1 1 2 4 6
    ms.insert(1); // 1 1 1 2 4 6
    ms.insert(7); // 1 1 1 2 4 6 7 
    ms.insert(9); // 1 1 1 2 4 6 7 9


    int cnt = ms.count(1);
    cout<<cnt;

     ms.erase(1); // deletes all 1's from the set
        
    // rest all function of set works
    return 0 ; 
}