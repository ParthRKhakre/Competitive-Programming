// The problem requires building a merge sort tree using 
// stable merge sort and answering median queries on subarrays 
// by binary searching the value space and counting elements ≤ mid 
// in the given range.

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
vector<int> seg[4 * N];
int arr[N];

void build(int idx, int l, int r) {
    if (l == r) {
        seg[idx].push_back(arr[l]);
        return;
    }

    int mid = (l + r) / 2;
    build(2 * idx, l, mid);
    build(2 * idx + 1, mid + 1, r);

    merge(seg[2 * idx].begin(), seg[2 * idx].end(),
          seg[2 * idx + 1].begin(), seg[2 * idx + 1].end(),
          back_inserter(seg[idx]));
}

int query(int idx, int l, int r, int ql, int qr, int x) {
    if (r < ql || l > qr) return 0;

    if (ql <= l && r <= qr) {
        return upper_bound(seg[idx].begin(), seg[idx].end(), x)
               - seg[idx].begin();
    }

    int mid = (l + r) / 2;
    return query(2 * idx, l, mid, ql, qr, x) +
           query(2 * idx + 1, mid + 1, r, ql, qr, x);
}

int getMedian(int n, int l, int r) {
    int low = 1, high = 1e9;
    int need = (r - l + 2) / 2;

    while (low < high) {
        int mid = (low + high) / 2;
        if (query(1, 0, n - 1, l, r, mid) >= need)
            high = mid;
        else
            low = mid + 1;
    }
    return low;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    build(1, 0, n - 1);

    while (q--) {
        int l, r;
        cin >> l >> r;
        l--; r--;
        cout << getMedian(n, l, r) << '\n';
    }
    return 0;
}
