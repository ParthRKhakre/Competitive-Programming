#include<bits/stdc++.h>
using namespace std;

// Not Optimal Uses Extra Space
vector<int> singleAppearence(vector<int>&nums){
    vector<int> single;
    map<int,int> mp;
    for(auto it:nums)
        mp[it]++;

    for(auto it:mp){
        if(it.second == 1)
        single.push_back(it.first);
    }    
    return single;
}

int main(){

}