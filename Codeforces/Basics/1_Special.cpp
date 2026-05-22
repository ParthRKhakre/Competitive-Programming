#include<bits/stdc++.h> 
using namespace std;

int main(){                                                                      /*
    Constant in C++
     1. Integer Constants : e.g. 4,99,-2
     2. Decimal Constants : 3.14, 0.3232342
     3. Character Constants : 
     'a' character constants can only have one character.
     4. String Literal
     "Hello World! {12321}" string literals can have any number of character. 
                                                                                 */
    cout << 123;

    // multiple outputs
    cout << 123 << "Hello World" << 9.20 << endl;

    // In order to print each output on other line we use '\n' or endl
    cout << 123<<endl;
    cout << "Hello World"<<'\n';
    cout << 9.20 << endl;
                                                                            /* 
     
     Special Character :
     \ (blackslash) is called the escape character
     \n means new line escape character
     \t means simple tab character
     \0 its a null character primary use is to mark the end of a string
     
     Variables
     are the containers that stores specific types of data
     They can be modified with the assignment operator "="

     Syntax: datatype  identifier/name = value;

     Rules to name variables:
     name of variable are case sensitive
     It cannot have spaces use underscore(_)
     It cannot start with digit 
     Cannot have a keyword as variable name
     Cannot have same name taken by Another variable in the samee scope
                                                                            */
    int x = 9;
    x = 10;
    cout << x << endl;

    int y; // Undefined value might give an error
    cout << y << endl;
                                                                            /*
     Datatype are used to set the type of data that a variable can store
     There are two types of datatype:
     Primitive - int,float,character,bool,void
     Derived - vector,string,map,set,priority_queue

     All values are true except 0,'\0',nullptr,NULL,""
                                                                            */
    string s = "Raj";
    cout << s <<endl;
                                                                            /*
    cin (Input)
    it is used to take input from the user
    cin >> value;

    We can take multiple values in the same line;
    cin >> val1 >> val2 >> val3;

    Note : Each input value must be seperated by a space or a new line.

    If you want to take a input sentence as a input use 
    getline(cin,variable_name)
    
    getline is pretty slow hence we dont use it
    
                                                                            */

    string age;
    int roll;
    cin >> age >> roll;
    cout << age << roll << endl;

    string comment;
    getline(cin,comment);
    cout << comment;




       
}