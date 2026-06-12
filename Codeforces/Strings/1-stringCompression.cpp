/*

for Compression we have run length encoding algorithm

chars[] = {'a','a','b','b','c','c','c'};
        "a 2 b 2 c 3" length of string is 6
output : 6 
you have to modify the input without using other string.

*/

#include<bits/stdc++.h>
using namespace std;

int compression(vector<char> &chars){
    int n = chars.size();

    int index = 0;
    int i = 0;
    while(i < n){
        char curr = chars[i];
        int count = 0;

        while(i < n && chars[i] == curr){
            count++;
            i++;
        }

        chars[index] = curr;
        index++;

        if(count > 1){
            string count_str = to_string(count);

            for(char &ch : count_str){
                chars[index] = ch;
                index++;
            }
        }
    }
    return index;
}


int main(){

    char chars[] = {'a','a','b','b','c','c','c'};


}