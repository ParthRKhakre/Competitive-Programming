                                                                /*
Memory Address
actual location where the data is 
stored on memory in hexadecimal number

If you want to find out the address of the 
variable we use &(ampersand or addressof operator).

Pointer are the special variables that store address 
of other variables

int a = 10;

int* pt = &a;
here we created a pointer to the variable 'a'
make sure that the datatype of the pointer and the 
value stored inside the pointer is same

float rate = 9.9920;
float* ptr = &rate;

Pointer to Pointer
When a pointer value is store in another pointer variable.
int** ptr2 = &ptr;

Dereference Operator(*)
here we try to access value at the address
*(&a) means value_at(address)

NULL Pointer
a pointer that doesnt point to any location
                                                               */
#include<bits/stdc++.h>
using namespace std;
int main(){

    int a = 10;
    int* ptr = &a; 
    
    cout << ptr << endl; // value stored by the ptr
    cout << &a << endl; // address of 'a'
    
    // As pointer is itself a variable hence they have their address
    cout << &ptr << endl;

    // Pointer to Pointer
    int** ptr2 = &ptr;
    cout << ptr2 << endl;

    // Dereference Operator
    cout << *(&a) << endl;
    cout << *(ptr) << endl;

    int age = 10;
    int* point = &age;
    cout << point << endl;
    int** parentPointer = &point;
    cout << *parentPointer << endl;

    // We accessed the value of actual variable to which we had pointer
    cout << **parentPointer << endl;
                                                                                           /* 
    NULL Pointer
       int* pt; 
       will store some garbage value.
       Inorder to avoid that we use NULL pointer.                                          */

     int* pt = NULL;


}