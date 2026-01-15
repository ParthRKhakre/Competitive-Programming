#include<bits/stdc++.h>
using namespace std;
int main(){

   // List is a container that stores elements in a doubly linked list structure.
   // It is defined in <list>.
   // Fast insert/delete anywhere (O(1) if iterator is known).
   // But slower random access (cannot do ls[2]).
   // list is rarely used, because vector is usually enough.
   // Random access (O(1)) is more useful than frequent insertion/deletion.

    list<int> ls ;

    ls.push_back(9);     // {9}
    ls.emplace_back(10); // {9,10}
    ls.push_front(2);    // {2,9,10} 
    ls.emplace_front(1); // {1,2,9,10}
    
// In vector you have to insert as push_front()
// is not allowed and insert operation in the 
// vector is quite costly



// rest all operation in the list are same as vector
// like begin(),end(),rend(),clear(),insert(),size(),swap()

    return 0;
}