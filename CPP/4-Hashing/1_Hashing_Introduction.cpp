#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int maximum = *max_element(arr.begin(), arr.end());

    // Precomputation
    vector<int> hash(maximum + 1, 0);
    for (int i = 0; i < n; i++)
        hash[arr[i]]++;

    int Q;
    cin >> Q;

    while (Q--)
    {
        int Query;
        cin >> Query;

        if (Query <= maximum)
            cout << hash[Query] << endl;
        else
            cout << 0 << endl;
    }
}