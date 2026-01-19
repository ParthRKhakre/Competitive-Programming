#include<bits/stdc++.h>
using namespace std;

void Concept(int num){
    if(num == 0){
        return;
    }
    cout<<num;
    // Concept(num--); Stack Overflow
    Concept(--num); // but this Works
}

int main(){

    int n;
    cin>>n;
    Concept(n);
    return 0;
}