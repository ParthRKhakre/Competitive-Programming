#include<bits/stdc++.h>
using namespace std;

int maximumElement(vector<int> &piles){
    int maximum = INT_MIN;
    for(int i = 0; i < piles.size(); i++)
        maximum = max(maximum,piles[i]);
    
    return maximum;
}

int totalHours(vector<int>& piles,int k) {
    int total = 0;
    for(int i = 0;i < piles.size();i++){
        int add = ceil((float)piles[i]/k);
        total += add;
    }
        return total;
}

int koko(vector<int>& piles, int h) {
        for(int i = 1;i <= maximumElement(piles);i++){
            int k = i;
            int hours = totalHours(piles,k);
            if(hours <= h) return i;
    }
}

int koko_binary(vector<int>& piles,int h){
    int low = 1,high = maximumElement(piles),ans = 0;

    while(low <= high){
        int mid = (low + high)/2;
        int hours = totalHours(piles,mid);
        if(hours <= h){
            ans = mid;
            high = mid - 1;
        }else low = mid + 1;
    }
    return ans;
}

int main(){

    int n,h;
    cin >> n >> h;

    vector<int> num(n);

    for(int i = 0;i < n;i++)
        cin>>num[i];
       
    cout<< koko_binary(num,h);    

}