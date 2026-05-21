
                                                                                                                     /*
STL - Standard Template Library
#include <bits/stdc++.h> 
is an cpp library that include all the library

using namespace std; 
use everything from the std (standard) 
namespace without writing std:: every time

void print(){
 // Code
}

Note : above function dont return anything hence is a void function

int sum(int a,int b){
    return a + b;
}

Note : above function returns a value hence is returning function 

STL is divided into 4 parts
Algorithms
Containers
Functions
Iterators

1) Pairs
is a container that holds two values together (maybe of different data types).
It is defined in <utility>.                                     
                                                                                                                */
#include<bits/stdc++.h>
using namespace std;
int main(){

    pair<int,int> p = {1,4};
    cout<<p.first<<endl; // Inorder to access the first member of pair we use .first
    cout<<p.second<<endl; // Inorder to access the second member we use .second

    pair<int ,pair<int,int>> x = {1,{3,2}}; 
//  These is an example of nested pairs are you know pair can store two data
    cout<<x.first<<endl;
    cout<<x.second.first<<endl; // second data's first member


//  simply understand pair as a datatype
    pair<int,int> arr[] = {{1,2},{3,2},{9,3}};
                        //   0     1      2   
    cout<<arr[2].second<<endl;
    cout<<arr[1].first;


    return 0;
}