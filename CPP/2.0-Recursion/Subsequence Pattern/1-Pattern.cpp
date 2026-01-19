#include<bits/stdc++.h>
using namespace std;

void subsequencePattern(int idx,vector<int>&ds,int arr[],int n){
    if(idx == n){
        for(auto it:ds){
            cout<<it<<" ";
        }
        if(ds.size() == 0)
        cout<<"{}";
        cout<<endl;
        return;
    }

    // take the current item
    ds.push_back(arr[idx]);    
    subsequencePattern(idx+1,ds,arr,n);
    
    ds.pop_back();
    // donot take the current item
    subsequencePattern(idx+1,ds,arr,n);

    
}


int main(){

    int arr[] = {3,1,2};
    vector<int> ds;

    int n = 3;
    subsequencePattern(0,ds,arr,n);

}