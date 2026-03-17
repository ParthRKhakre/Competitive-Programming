/*
Strings
strings are collection of characters
character only allow single character input.

strings are written in " "(Double Quotes) 
where as character is written in (single quotes)''

Input gets breaked as it receives space or new line character
Strings are accessable using index values

*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    string str = "Hello";
    cout<<str<<endl;

    string str2;
    cin>>str2;
    cout<<str2<<endl;
    
    // String Concatenation
    string result = str + str2;
    cout<<result<<endl;

    // Strings can be compared using relational operators
    if(str == str2)
        cout<<"Equal"<<endl;
    else
        cout<<"Not Equal"<<endl;

    // Accessing string character using index
    cout<<str[0]<<endl;
    cout<<str[1]<<endl;



}