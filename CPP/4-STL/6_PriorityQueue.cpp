#include<bits/stdc++.h>
using namespace std;
int main(){

   // priority_queue is a special type of queue where elements are arranged by priority (not by insertion order).
   // It is defined in <queue>.
   // Types
   // Max-Heap (default): Largest element is on top.
   // Min-Heap (common in CP): priority_queue<int, vector<int>, greater<int>> pq;
   // Implementation: Internally uses a heap (binary heap).
   // push() and pop() → O(log n)
   // top() → O(1)

    priority_queue<int> pq; // Maximum at top / max  heap
    pq.push(4); // 4
    pq.push(7); // 7,4
    pq.push(3); // 7,4,3
    pq.emplace(9); // 9,7,4,3

    cout<<pq.top()<<endl; // gives the most prior(largest) element  

    priority_queue<int,vector<int>,greater<int>> min_pq ;  // min heap       
    min_pq.push(4); // 4
    min_pq.push(7); // 4,7
    min_pq.push(3); // 3,4,7
    min_pq.emplace(9); // 3,4,7,9
    cout<<min_pq.top();


    return 0;
}