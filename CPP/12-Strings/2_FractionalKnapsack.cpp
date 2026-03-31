#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int>val = {60,100,120};
    vector<int>wt = {10,20,30};

    multiset<float> rt;

    for(int i =0;i<val.size();i++){
        int ratio = val[i]/wt[i];
        rt.emplace(ratio);
    }

    for(auto it:rt) cout<<it<<endl;

    return 0;
}