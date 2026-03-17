#include<bits/stdc++.h>
using namespace std;
int main(){

    int m,n;
    cin>>m>>n;

    int adj[n+1][n+1] = {0};
    for(int i = 1;i<=m;i++){
        int u,v;
        cin>>u>>v;

        // directed Graph
        adj[u][v] = 1;
    }
}