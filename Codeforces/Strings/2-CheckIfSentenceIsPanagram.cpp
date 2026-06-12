/*
panagram is a sentence that have all the worrd from the alphabets 

input : thequickbrownfoxjumpsoverthelazydog
output : true
*/

#include<bits/stdc++.h>
using namespace std;
int main(){


}


bool checkPanagram(string s){
    vector<int> hash(26,0);

    for(char &ch:s){
        int index = ch - 'a';
        hash[index]++;
    }

    for(int &count : hash){
        if(count == 0)
            return false;
    }
    return true;
}