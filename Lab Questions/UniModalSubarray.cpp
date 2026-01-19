#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll ternary_search_unimodal(int l, int r, const vector<ll>& prefix) {
    ll ans = LLONG_MIN;
    while (r - l >= 3) {
        int m1 = l + (r - l) / 3;
        int m2 = r - (r - l) / 3;
        ll score1 = 0;
        for (int peak = l; peak <= m1; ++peak) {
            ll left = prefix[peak] - prefix[l];
            ll right = prefix[r] - prefix[peak + 1];
            score1 = max(score1, left + right);
        }
        ll score2 = 0;
        for (int peak = m1; peak <= m2; ++peak) {
            ll left = prefix[peak] - prefix[l];
            ll right = prefix[r] - prefix[peak + 1];
            score2 = max(score2, left + right);
        }
        ans = max({ans, score1, score2});
        if (score1 > score2) {
            r = m2;
        } else {
            l = m1;
        }
    }
    for (int peak = l; peak <= r; ++peak) {
        ll left = prefix[peak] - prefix[l];
        ll right = prefix[r] - prefix[peak + 1];
        ans = max(ans, left + right);
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    for (int test = 0; test < t; ++test) {
        int n;
        cin >> n;
        vector<ll> a(n + 1);
        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
        }
        vector<ll> prefix(n + 1, 0);
        for (int i = 1; i <= n; ++i) {
            prefix[i] = prefix[i - 1] + a[i];
        }
        ll answer = 0;
        for (int l = 1; l <= n; ++l) {
            for (int r = l + 1; r <= n; ++r) {
                answer = max(answer, ternary_search_unimodal(l, r - 1, prefix));
            }
        }
        cout << answer << '\n';
    }
    return 0;
}
