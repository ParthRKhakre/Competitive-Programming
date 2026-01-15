// Recursion - when a function calls itself until a specified condition is met.

#include<iostream>
using namespace std;

int cnt = 0;

void print(){

// If there is no base condition the program would get into 
// infinite recursion ultimately result into stack-overflow(segmentation-fault)

// Base Condition : condition used to stop the recursion is known as base condition.
    if(cnt == 5) return;
    cout<<"1"<<endl;
    cnt++;
    print();
}


int main(){

    print();
    return 0;
}