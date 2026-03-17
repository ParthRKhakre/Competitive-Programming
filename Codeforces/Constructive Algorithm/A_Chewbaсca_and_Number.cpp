#include<bits/stdc++.h>
using namespace std;

long chewbacca(long n){

    string chew = "";
    while(n){
        long t = n % 10;
        if(t > 4)
            chew.push_back(9-t);
        else
            chew.push_back(t);

            n = n/10;
    }
    reverse(chew.begin(),chew.end());
    stoi(chew);
    cout<<chew;
}

int main(){

    long n;
    cin>>n;
    chewbacca(n);
    return 0;
}