#include<bits/stdc++.h>
using namespace std;
int main(){

    // a map is a container that stores elements as key-value pairs, where keys are unique and automatically sorted.
    // It is defined in <map>.
    // Fast lookup, insertion, deletion → O(log n) (uses balanced BST)
    // Storing frequencies, indices, or mappings
    // Works when you need sorted keys automatically

//  map<key,value>
    map<int,int> mpp;

    mpp[0] = 2; // it keep value 2 on key 0
    mpp.emplace(3, 1); // key 3 → value 1
    mpp.insert({1, 9}); // key 1 → value 9
    mpp.insert({7, 1}); // key 7 → value 1

    cout<<mpp[6]<<endl; // if something doesnt exit it gives you 0

    for(auto it : mpp) cout<<it.first<<" "<<it.second<<endl;

    // Multimap  : similar to map just allows duplicate key 
    multimap<int,int> mm; // all function similar to a map
    

    // Unordered multimap : similar to a map just keeps element in
    // random order not a sorted order but doesnt allow duplicates
    // Works in O(1)
    unordered_map<int,int> ump;


    return 0;
}