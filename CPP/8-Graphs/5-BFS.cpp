#include<bits/stdc++.h>
using namespace std;

void bfs(vector<vector<int>> &adj,int n){
    
    vector<int> visited(n+1,0);
    vector<int> bfs_values;
    queue<int> q;

    visited[1] = 1;
    q.push(1);

    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout<<node<<" ";

        for(auto it : adj[node]){
            if(visited[it] == 0){
                visited[it] = 1;
                q.push(it);
            }
        }
    }
}

int main(){
    int m,n;
    cin>>n>>m;
    vector<vector<int>> adj(n+1);
    for(int i = 1;i<=m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(adj,n);
}