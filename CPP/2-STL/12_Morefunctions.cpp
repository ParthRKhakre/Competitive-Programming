#include<bits/stdc++.h>
using namespace std;
int main(){

    int num = 7;// 0000..111

    int cnt = __builtin_popcount(num);
    // builtin popcount proviide how many set bits are there that  is 1's

    long long x = 98723487243879234;
    int cnt1 = __builtin_popcountll(x);
     // for long long __built_in_popcount became 
     // __built_in_popcountll()

     string s = "123";
     do{
        cout<<s<<endl;
     }while(next_permutation(s.begin(),s.end()));

     // next_permutation() gives all permuntation of string


     // If you want max and min element from array
     int arr[] = {23,1,12,42,54};
     int n = sizeof(arr)/sizeof(arr[0]);
     int maxi = *max_element(arr,arr+n);  
     int mini = *min_element(arr,arr+n);
     cout<<maxi<<" "<<mini;  


return 0;
}