#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll merge(vector<int>& arr, vector<int>& temp, int left, int mid, int right) {
    int i = left;
    int j = mid + 1;
    int k = left;
    ll inversions = 0;
    
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            // All remaining elements in left half are greater
            temp[k++] = arr[j++];
            inversions += (mid - i + 1);
        }
    }
    
    while (i <= mid) {
        temp[k++] = arr[i++];
    }
    
    while (j <= right) {
        temp[k++] = arr[j++];
    }
    
    // Copy back to original array
    for (int idx = left; idx <= right; ++idx) {
        arr[idx] = temp[idx];
    }
    
    return inversions;
}

ll mergeSort(vector<int>& arr, vector<int>& temp, int left, int right) {
    ll inversions = 0;
    if (left < right) {
        int mid = left + (right - left) / 2;
        inversions += mergeSort(arr, temp, left, mid);
        inversions += mergeSort(arr, temp, mid + 1, right);
        inversions += merge(arr, temp, left, mid, right);
    }
    return inversions;
}

ll countInversions(vector<int>& arr) {
    int n = arr.size();
    vector<int> temp(n);
    return mergeSort(arr, temp, 0, n - 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    for (int test = 0; test < t; ++test) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        cout << countInversions(a) << '\n';
    }
    return 0;
}
