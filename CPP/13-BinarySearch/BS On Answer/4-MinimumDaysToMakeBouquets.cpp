#include<bits/stdc++.h>
using namespace std;

bool checker(vector<int> bloomDay,int m,int k,int day){
    int cnt = 0,bouquets = 0;
    for(int i = 0;i < bloomDay.size();i++){
        if(bloomDay[i]<=day) cnt++;
        else{
            bouquets += (cnt / k);
            cnt = 0;
        }
    }
    bouquets += (cnt / k);
    if(m <= bouquets) return true;
    else return false;
}

int minimumDays(vector<int> bloomdays,int m,int k){
    int mx = *max_element(bloomdays.begin(),bloomdays.end());
    int mn = *min_element(bloomdays.begin(),bloomdays.end());

    if((long long)m*k > bloomdays.size()) return -1;
    for(int i = mn;i<=mx;i++)
        if(checker(bloomdays,m,k,i)) return i;

    return -1;
}

int optimized(vector<int> bloomdays,int m,int k){
    int high = *max_element(bloomdays.begin(),bloomdays.end());
    int low = *min_element(bloomdays.begin(),bloomdays.end());

    if((long long)m*k > bloomdays.size()) return -1;
    while(low <= high){
        int mid = (low + high) / 2;
        if(checker(bloomdays,m,k,mid)) 
        high = mid - 1;
        else low = mid + 1;
    }
    return low;
}

int main(){
    int n,m,k;
    cin >> n >> m >> k;
    vector<int> bloomDay(n);
    for(int i = 0;i<n;i++)
    cin >> bloomDay[i];
    cout<< optimized(bloomDay,m,k);
}