#include <bits/stdc++.h>
using namespace std;
void bubble(int arr[], int n){

    for(int i = n - 1;i >= 1 ; i--){
        for(int j = 0;j <=n - i - 1;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }    
}


void optimizedBubble(int arr[],int n){
          
        for(int i = n -1;i>=1;i--){
            int swap = 0;
            for(int j = 0;j<=n-i-1;j++){
                if(arr[j] > arr[j+1]){
                    int temp = arr[j];
                     arr[j] = arr[j+1];
                     arr[j+1] = temp;
                     swap = 1;
                }
            }
            //if(swap == 0) cout<<"Run"<<endl; break;
        }
        
} 


int main(){

    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    optimizedBubble(a, n);

    for(auto it:a) cout<<it<<" ";

    return 0;
}
