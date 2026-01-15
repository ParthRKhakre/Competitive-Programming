#include <bits/stdc++.h>
using namespace std;

vector<int> v;

// TC:O(n)
void printDivisor(int num){
    for(int i = 1; i <= num; i++)
        if (num % i == 0)  cout<< i << " ";
}

void printDivOptimal(int num){

    // O(sqrt(N))
    for(int i = 1;i<=sqrt(num);i++){
        if(num%i == 0){
            v.push_back(i);
            if(num/i != i)
            v.push_back(num/i);
        }
    }

    sort(v.begin(),v.end());

    for(auto it : v) cout<<it<<" ";

}

int main(){

    int num;
    cin >> num;
    printDivisor(num);
    return 0;
}
