#include<bits/stdc++.h>
using namespace std;
int main(){

    // Vector is a dynamic array (can grow or shrink in size).
    // It is defined in <vector>.

    vector<int> v ; // Create a empty vector
    v.push_back(2); // push_back() add element at end
    v.emplace_back(4); // emplace_back() similar to push_back faster than push_back

    vector<pair<int,int>> vp;
    vp.push_back({1,2}); // here you need to put the {}
    vp.emplace_back(1,2); // no {} are required
    

    vector<int> vd(9,100);
    // These define a vector wiith 9 elements with every value initialised to 100

    vector<int> v(9);
    // These defines a vector with 9 values with 0 or some garbage value

    // If you want to copy one vector into another 
    vector<int> v2(v); // these is how we copy one vector into another

    // accessing the vector elements similar to that of an array
    // Another way to iterate an array is using "iterator"

    // What is an iterator 

    // Syntax for an iterator is 
    // datatype::iterator name_of_iterator = name_of_vector.begin()

    // vector<int> v = {20,10,13,14,12};

    // vector<int>::iterator it = v.begin();
    // v.begin() ---> 20


    // [20,10,13,14,12] 
    // These element might be stored somewhere in the memory
    // so let the vector name be 'v' when we do v.begin() it points 
    // the first member element of the vector
   
    vector<int>::iterator it = v.begin();

    // Inorder to access anything in the memory inn cpp we do 
    // *(it) 
    cout<<*(it);
    // it++ it move the it one place ahead

    vector<int>::iterator it = v.end(); // 'it' point to the last member + 1 element position

    // We also have some more reverse iterator(never use) like 
    // rend() reverse_end()  it point right before first element
    // rbegin() reverse_begin()  it point to last element 

    cout<<v[0]<< v.at(0); 
    // v[0] → no bounds check (faster, but risky if index is invalid).
    // v.at(0) → checks bounds (throws out_of_range error if index is invalid).
    
    cout<<v.back(); 
    // points to the element present at the last for this [20,10,13,14,12] 
    // simply means 12

    for(vector<int>::iterator it = v.begin();it != v.end();it++)
        cout<<*(it)<<" ";

    // Above syntax is quite lengthy STL provide a  keyword "auto" 
    // that is equivalent to the data_type::iterator = auto
    
    for(auto it = v.begin();it != v.end();it++)
    cout<<*(it)<<" ";

    // but it also becames large so  we have something call for-each loop 
    for(auto it : v)
    cout<<it;

    // We might need to delete/erase something from the vector for that we have .erase(iterator)
    // [12,32,41,15,31]
    v.erase(v.begin()); // we array [32,41,15,31] 12 got removed

    // If you want to delete element in some range 
    v.erase(v.begin(),v.begin()+2); 
    // [15,31]
    //[start,end)  include start and exclude end

    vector<int> v(2,100); 
    // this creates 2 elements of value 100 i.e.[100,100]
    v.insert(v.begin(),300);
    // [300,100,200]
    // v.insert(position,number_of_elements,value_to_insert);
    v.insert(v.begin()+1,5,9);
    // [300,9,9,9,9,9,100,200]

    // Merging two vector
    vector<int> copy(2,10); // [10,10]
    v.insert(v.begin(),copy.begin(),copy.end());
    // In vector 'v' insert the copy 
    // [10,10,300,9,9,9,9,9,100,200]

    v.size(); // gives total elements present in the vector
    v.pop_back(); // removes  the last  element from the vector
    
    vector<int> v1 = {10,20};
    vector<int> v2 = {30,40};
    v1.swap(v2); // swaps element in v1 with element from v2


    // clearing / Emptying the vector
    v.clear(); // erases the entire vector
    v.empty(); // empty the vector similar to the .clear()
    return 0;
}

