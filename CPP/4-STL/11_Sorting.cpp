#include<bits/stdc++.h>
using namespace std;

// sort() function is usually implemented as Introsort (Introspective Sort).
// Introsort = Quicksort + Heapsort + Insertion Sort 
// TC : O(nlogn)

bool comp(pair<int,int> p1 , pair<int,int> p2) {
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;

    // they are same
    if(p1.first > p2.first) return true;
    return false;
}

int main(){

    vector<int> v = {12,24,45,19,81,1};
    vector<int> x = {12,24,45,19,81,1};

    sort(v.begin(),v.end());
//          start     end+1

// using this you can sort any container
     for(auto it : v) cout<<it<< " ";
     cout<<endl;

// Suppose you want to sort some element only
     sort(x.begin()+2,x.begin()+6);     
     for(auto it : x) cout<<it<< " ";
      cout<<endl;

// If you want to sort the given container in decreasing order 
     sort(v.begin(),v.end(),greater<int>()); // greater<int>() is a comparator
     for(auto it : v) cout<<it<< " ";


// suppose we want to sort an container in a certain way according to our requirement
// example :  sort the following according to second element
// if second element is same then sort 
// it according to first element but in descending order
 

pair<int,int> a[]={{1,2},{2,1},{4,1}};
// [{2,1},{4,1},{1,2}] same second element then sort descending 
// [{4,1},{2,1},{1,2}]


// In above scenario's we write sort(a,a+n,comp,
// comp is a self written comparator it is a boolean function
//  Refer the above comp function
// while writing comparator just take two element units and analyse them 
    return 0;
}