
#include<bits/stdc++.h>
using namespace std;

long long largest(vector<vector<int>>& bottomleft,vector<vector<int>>& topright){
    int n = bottomleft.size();

    int maxside = 0;

    for(int i = 0;i<n;i++){
        for(int j = i + 1;j<n;j++){
            int toprightx = min(topright[i][0],topright[j][0]);
            int bottomleftx = max(bottomleft[i][0],bottomleft[j][0]);

            int w = toprightx - bottomleftx;

            int toprighty = min(topright[i][1],topright[j][1]);
            int bottomlefty = max(bottomleft[i][1],bottomleft[j][1]);

            int height = toprighty - bottomlefty;
            int side = min(w,height);
            
            maxside = max(maxside,side);
        }
    }
    return 1LL* maxside*maxside;
}

int main(){

}