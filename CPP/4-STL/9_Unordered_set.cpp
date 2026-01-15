#include<bits/stdc++.h>
using namespace std;
int main(){

    // unordered_set is a container that stores unique elements, but unlike set
    // the elements are not sorted they might be arrange in any random order.
    // It is defined in <unordered_set>.
    // Faster than set (average O(1) for insert, find, erase)
    // Use when order doesn’t matter but uniqueness is required
    // Good for problems like checking duplicates, hashing, frequency checks

    unordered_set<int> st;

    st.insert(9);
    st.insert(2);
    st.insert(1);
    st.insert(2);
    st.insert(10);
    st.insert(11);
    st.insert(4);

    return 0;
}
