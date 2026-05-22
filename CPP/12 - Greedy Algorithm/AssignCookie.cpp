#include<bits/stdc++.h>
using namespace std;

int findMaximumCookie(vector<int> &Student,vector<int> &Cookie){
    int n = Student.size();
    int m = Cookie.size();

    sort(Student.begin(),Student.end());
    sort(Cookie.begin(),Cookie.end());

    int i = 0, j = 0;
    while(i < n && j < m){
        if(Cookie[j] >= Student[i]){
            i++;
        }
        j++;
    }
    return i;
}

int main(){

    int n,m;
    cin >> n >> m;

    vector<int> Student(n);
    for(int i = 0; i < n;i++)
    cin >> Student[i];
    
    vector<int> Cookies(m);
    for(int i = 0; i < m;i++)
    cin >> Cookies[i];

    int maximum = findMaximumCookie(Student,Cookies);
    cout << maximum << endl;
    return 0;
}