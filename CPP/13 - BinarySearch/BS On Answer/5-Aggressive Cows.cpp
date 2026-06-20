#include<bits/stdc++.h>
using namespace std;

bool maximum_distance_checker(vector<int> &stalls,int k,int dist){
    int cnt = 1,last = stalls[0];
    for(int i = 1;i < stalls.size();i++){
        if(stalls[i] - last >= dist){
            cnt ++;
            last = stalls[i];
        }
        if(cnt >= k) return true;
    }
    return false;
}


int aggressiveCows(vector<int> &stalls, int k){

    sort(stalls.begin(),stalls.end());
    int n = stalls.size();
    int mx = stalls[n-1];
    int mn = stalls[0];
    int maximum_val = 0;

    for(int i = 1; i <= (mx-mn);i++){
        if(maximum_distance_checker(stalls,k,i))
        maximum_val = i;
        else
        break;
    }
    return maximum_val;
}

int main(){

}