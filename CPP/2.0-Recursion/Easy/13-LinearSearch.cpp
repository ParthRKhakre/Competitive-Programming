#include<bits/stdc++.h>
using namespace std;

vector<int> linearsearchRecusion(vector<int>&arr,vector<int>&occurance,int key,int i){
    if(arr.size() == i) return occurance;
    if(arr[i] == key) occurance.push_back(i);
  return linearsearchRecusion(arr,occurance,key,i+1);
}

vector<int> linearSearch(vector<int>&arr,int key){
  vector<int> occurance;
  int i = 0;
  return linearsearchRecusion(arr,occurance,key,i);
}

int main(){
    vector<int> arr = {3,2,1,18,9,18,2};
    int key;
    cin>>key;
    vector<int> occurance = linearSearch(arr,key);

    for(auto it:occurance)
    cout<<it<<" ";
}