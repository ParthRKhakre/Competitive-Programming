#include <bits/stdc++.h>
using namespace std;

void subsequencePattern(int idx, vector<int>& ds, vector<int>& arr) {
    if (idx == arr.size()) {
        if (ds.empty()) {
            cout << "{}";
        } else {
            for (int x : ds)
                cout << x << " ";
        }
        cout << '\n';
        return;
    }

    // take
    ds.push_back(arr[idx]);
    subsequencePattern(idx + 1, ds, arr);

    // not take
    ds.pop_back();
    subsequencePattern(idx + 1, ds, arr);
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n), ds;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    subsequencePattern(0, ds, arr);
    return 0;
}
