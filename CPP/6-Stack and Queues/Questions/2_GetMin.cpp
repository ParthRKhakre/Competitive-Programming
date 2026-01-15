#include<bits/stdc++.h>
#include<math.h>
using namespace std;

// Traditional Function takes O(N)
class stc{
public:
    stack<int> s;
    int getMin(){
    stack<int> temp = s;
    int min = INT_MAX;
    while(!temp.empty()){
        if(temp.top() < min){
            min = temp.top();
        }
        temp.pop();
    }
    return min;
   }
};

// Optimize Time O(1)
class st{
public:    
    stack<pair<int,int>> st;

    void push(int val){
        if(st.empty()){
            st.push({val,val});
        }else{
            st.push({val, min(val,st.top().second)});
        }
    }

    int getMini(){
        return st.top().second;
    }

    int top(){
        return st.top().first;
    }


};

// Optimize Space
class Stack{
public:
    stack<int> st;
    int mini = INT_MAX;
    
    void push(int x){
        if(st.empty()){
            mini = x;
            st.push(x);
        }else{
            if(x > mini){
                st.push(x);
            }else{
                st.push(2*x-mini);
                mini = x;
            }
        }
    }

    void pop(){
        if(st.empty()) return ;

        int x = st.top();
        st.pop();

        if(x < mini){
            mini = 2 * mini - x;
        }
    }

    int top(){
        if(st.empty()) return;
        int x = st.top();
        if(mini < x) return x;
        return mini;
    }


    int getMini(){
        return mini;
    }

};

int main(){    

    return 0;
}