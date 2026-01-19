#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll merge(vector<int>& arr, int l, int m, int r, int bit) {
    vector<int> temp(r - l + 1);
    int i = l, j = m + 1, k = 0;
    ll inv = 0;
    
    while (i <= m && j <= r) {
        if ((arr[i] & (1 << bit)) <= (arr[j] & (1 << bit))) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            // Count split inversions for this bit
            inv += (m - i + 1);
        }
    }
    while (i <= m) temp[k++] = arr[i++];
    while (j <= r) temp[k++] = arr[j++];
    
    for (int p = 0; p < k; ++p) {
        arr[l + p] = temp[p];
    }
    return inv;
}

ll _mergesort(vector<int>& arr, int l, int r, int bit) {
    ll inv = 0;
    if (l < r) {
        int m = l + (r - l) / 2;
        inv += _mergesort(arr, l, m, bit);
        inv += _mergesort(arr, m + 1, r, bit);
        inv += merge(arr, l, m, r, bit);
    }
    return inv;
}

ll count_bitwise_inversions(vector<int>& arr, int bit) {
    vector<int> temp = arr;
    return _mergesort(temp, 0, arr.size() - 1, bit);
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
        ll total = 0;
        for (int bit = 0; bit < 32; ++bit) {
            total += count_bitwise_inversions(a, bit);
        }
        cout << total << '\n';
    }
    return 0;
}
