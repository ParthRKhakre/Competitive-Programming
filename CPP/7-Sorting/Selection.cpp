#include <bits/stdc++.h>
using namespace std;

void selection(int arr[], int n){

    for (int i = 0; i < n - 1; i++){
        int min = i;
        for (int j = i; j < n; j++){
            if (arr[j] < arr[min])
                min = j;
        }

        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

int main(){

    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    selection(a, n);

    for(auto it:a) cout<<it<<" ";

    return 0;
}
