#include<bits/stdc++.h>
using namespace std;

void pat1(int row,int col){

    if(row == 0)
    return;

    if(col < row){
        cout<<"*";
        pat1(row,col+1);
    }else{
        cout<<endl;
        pat1(row+1,col);
    }
}
 
int main(){
    int row,col;
    cin>>row>>col;
    pat1(row,col);
}