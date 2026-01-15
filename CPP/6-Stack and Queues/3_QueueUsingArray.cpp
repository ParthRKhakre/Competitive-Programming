                                                                /*
Implementing queue using array
queue using array has the limit that 
its of fix size.


                                                               */
#include<bits/stdc++.h>
using namespace std;

class Queue{

public:
    int size = 4;
    int q[4];
    int currentSize = 0; // current variables in queue

    int start;
    int end;

    Queue(){
        start = -1;
        end = -1;
    }

    void push(int data){
        if(currentSize == size) 
        cout<<"Queue Overflow!"<<endl;
        if(currentSize == 0){
            start = 0;
            end = 0;           
        }else{
            end = (end + 1) % size;
        }
       q[end] = data;
       currentSize++;
    }

    int pop(){
    if(currentSize == 0){
        cout<<"Queue is empty"<<endl;
        return -1;
    }

    int el = q[start];
    if(currentSize == 1){
        start = end = -1;
    }else{
        start = (start + 1) % size;
     }
     currentSize -= 1;
     return el;
    }

    void Top(){
        if(currentSize == 0){
            cout<<"Empty Queue"<<endl;
            return;
        }
        cout<<q[start]<<endl;
    }

    void Size(){
        cout<<currentSize;
    }

};

int main(){

    Queue q;

    q.push(9);
    q.push(10);
    q.pop();
    q.Top();
    q.push(10);
    q.Size();

    return 0;
}