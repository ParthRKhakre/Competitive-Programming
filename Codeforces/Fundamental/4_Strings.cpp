                                                                                   /*
Strings
strings are collection of characters
character only allow single character input.

strings are written in " "(Double Quotes) 
where as character is written in (single quotes)''

Input gets breaked as it receives space or new line character
Strings are accessable using index values

Useful string function
#include <string>

    Function	                Use
s.size() / s.length()	    Length of string
s.push_back(ch)	            Add character at end
s.pop_back()	            Remove last character
s.substr(i,len)	            Substring
s.find(x)	                Find substring/char
s.erase(i,len)	            Remove part of string
s.insert(i,str)	            Insert string
reverse(s.begin(), s.end())	Reverse string
sort(s.begin(), s.end())	Sort characters
stoi(s)	                    String → int
to_string(x)	            Number → string
getline(cin,s)	            Input full line
s.empty()	                Check empty
s.clear()	                Empty string
s.front()	                First character
s.back()	                Last character

Useful character functions
#include <cctype>

isdigit(c)	                Digit check
isalpha(c)	                Alphabet check
isalnum(c)	                Alphanumeric
tolower(c)	                Lowercase
toupper(c)	                Uppercase                                               */

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