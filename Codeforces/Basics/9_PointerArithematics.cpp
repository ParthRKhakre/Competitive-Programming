                                                                    /*
Pointer Arithematic

Increament (++) / Decrement (--)
int a = 10;
int *p = &a;
p++;

If we did p++ or ++p in pointer number of bytes are added
depends on the datatype of the variable 
Suppose p = 100 
after modification p = 104 it incremented by 4 bytes

Addition or Subtraction on numbers using pointer 
pointer addition is not allowed in c++
but we can do subtraction over the pointer if datatype
of the pointer is same

We can compare pointers                                              */

#include<iostream>
using namespace std;
int main(){

    int a = 10;
    int *ptr = &a;

    cout << ptr << endl;
    ptr++;
    cout << ptr << endl; // Increament by 4 Bytes

    int b = 9;
    int *ptr1 = &b;
    cout << ptr1 - ptr << endl;
}