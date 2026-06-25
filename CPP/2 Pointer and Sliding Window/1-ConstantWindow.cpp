/*
2 Pointer or Sliding Window Technique
is a constructive technique that uses two pointers to iterate through a data structure,
typically an array or a list. The two pointers can be used to create a window that can
expand or contract based on certain conditions, allowing for efficient solutions to problems
involving subarrays, substrings, or other contiguous segments of data.

There are 4 Problems :
1.Constant Size Window
2.Longest Subarray/Substring
3.Number Of Subarray
4.Shortest/Minimum Window

1. Constant Size Window:
In this problem, we are given an array and a window size k.
We need to find the Maximum sum of all subarrays of size k.

*/

#include <bits/stdc++.h>
using namespace std;

void ConstantWindow(vector<int> &arr, int k){

    int l = 0, r = k - 1, n = arr.size();
    int maxSum = 0, sum = 0;

    for (int i = 0; i < k; i++)
        sum += arr[i];

    cout << sum << endl;

    while (r < n - 1)
    {
        sum = sum - arr[l];
        l++;
        r++;
        sum = sum + arr[r];
        cout << sum << endl;
    }
}

void constant_Window(vector<int> &arr,int k){

    int sum = 0;

    for(int i = 0;i < k;i++)
        sum = sum + arr[i];
    cout << sum << endl;

    for(int i = k;i < arr.size();i++){
        sum = sum + arr[i] - arr[i-k];
        cout << sum << endl;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        constant_Window(arr, k);
    }
    return 0;
}