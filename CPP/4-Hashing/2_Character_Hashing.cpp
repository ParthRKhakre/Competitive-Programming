#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    cin>>s;

    // pre-compute
    int hash[26] = {0};
    for(int i = 0;i<s.size();i++){
        hash[s[i]-'a'] += 1;
    }

    int q;
        cin>>q;
    while(q--){
        char in;
        cin>>in;
        cout<<hash[in - 'a']<<endl;
    }

    return 0;
}