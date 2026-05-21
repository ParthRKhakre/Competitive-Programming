#include<bits/stdc++.h>
using namespace std;
int  main(){

 // a set is a container that stores unique elements in sorted order.
 // It is defined in <set>.
 // Remove duplicates automatically.
 // Maintain sorted order.
 // Fast search, insert, delete → O(log n) (uses balanced BST internally).

 set<int> s;
 s.insert(9);  // 9
 s.insert(9);  // 9
 s.insert(10); // 9 10
 s.insert(2);  // 2 9 10
 s.insert(2);  // 2 9 10
 s.insert(7);  // 2 7 9 10

 for(auto it:s) cout<< it <<" ";

 auto it = s.find(9); // .find returns an iterator that points to the '9' element 9 
 auto it = s.find(11); // 11 is not present in the set it return s.end()

 s.erase(7); // it remove the element out of the set
 
 int cnt = s.count(2); // if 2 exist in the set it returns 1 else 0


 // Read about it 
 auto it = s.lower_bound(2);
 auto it = s.upper_bound(3);

// lower_bound and upper_bound are functions
// used with sorted containers (like vector,
// array, or set) to search efficiently.

    return 0;
}
