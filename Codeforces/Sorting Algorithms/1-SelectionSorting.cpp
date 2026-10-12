#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>&nums){

}

int main(){

    vector<int> nums;

    // Input
    for(auto it : nums)
    cin >> it;

    cout << "Before Sorting" << endl;
    for(auto it : nums)
    cout << it << " ";

    // Sorting
    selectionSort(nums);

    cout <<"\n";

    cout << "After Sorting" << endl;
    for(auto it : nums)
    cout << it;

    return 0;
}