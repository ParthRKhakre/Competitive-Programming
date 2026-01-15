#include<bits/stdc++.h>
using namespace std;
int main(){

    // Queue is a container that follows FIFO (First In, First Out) principle.
    // It is defined in <queue>.
    // Elements are inserted at the back.
    // Elements are removed from the front.

    queue<int> q;

// Inserting into a queue
    q.push(1);    // 1
    q.emplace(2); // 1,2
    q.push(1);    // 1,2,1

    cout<<q.front(); // access the front most element in the queue    

    cout<<q.back();  // access the last element of the queue
    
    cout<<q.size();  // number of elements 

    cout<<q.empty();  // removes all elements from the queue
    return 0;
}