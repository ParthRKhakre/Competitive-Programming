                                                                /*
Pass by reference Using:
pointer
reference(alias)                                                */

void changeA(int* a){ 
// passing the value by reference using pointer
    *a = 100;
}

void changes(int &b){
// Pass by reference using alias
    b = 1000;
}

#include<iostream>
using namespace std;
int main(){

    int a = 10;
    
    changeA(&a);

    cout << "Inside main function: " << a << endl;

    int arr[] = {1,2,3,4,5};
                                                             /* 
    When a array is created by us internally an pointer 
    is created to the first element of the array.

    arr[1,2,3,4,5]

    These array pointer are of special category known as 
    constant pointer.
    arr* always points towards the first element address 
    of the array.

    Normal Pointer
    int a = 9,b = 10;
    int* ptr = &a;
    ptr = &b;

    Above snippet works fine in the normal pointer
    but constant pointer are unmodifiable.                    */
    cout << *arr;
    return 0;
}
