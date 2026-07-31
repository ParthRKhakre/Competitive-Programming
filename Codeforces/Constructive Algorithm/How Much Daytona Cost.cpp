#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >>k;

        vector<int> a(n);
        for(int i = 0; i < n ; i++)
            cin >> a[i];
        
        bool flag = false;
        for(auto it:a){
            if(it == k) {
                flag = true;
                break;
            }
        }
        
        flag ? cout << "YES" << endl : cout<< "NO" << endl;
    }
}