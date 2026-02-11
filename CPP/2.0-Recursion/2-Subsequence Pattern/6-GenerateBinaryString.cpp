#include<bits/stdc++.h>
using namespace std;

void generateBinary(int n,string val,vector<string>&st){
    if(val.length() == n){
        st.push_back(val);
        return;
    }

    generateBinary(n,val+"0",st);
    if(val.empty() || val.back() != '1'){
        generateBinary(n,val+"1",st);
    }
}

int main(){

    int n;
    vector<string> seq;
    cin>>n;
    generateBinary(n,"",seq);

    for(auto it:seq){
        cout<<it<<endl;
    }

}