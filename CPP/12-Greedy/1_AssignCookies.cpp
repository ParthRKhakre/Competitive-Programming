#include<bits/stdc++.h>
using namespace std;
void print(vector<int> v){
    for(auto it : v) cout<<it<<" ";
}

int main(){

    vector<int> g = {1,5,3,3,4};
    vector<int> s = {4,2,1,2,1,3};

    sort(g.begin(),g.end());
    sort(s.begin(),s.end());
    
    int left = 0,right = 0;

    while(left<s.size()){
        if(g[right] <= s[left]){
            right++;
        }
        left++;
    }

    cout<<right;
    return 0 ;
}

