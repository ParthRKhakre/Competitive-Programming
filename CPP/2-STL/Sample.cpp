#include <bits/stdc++.h>
using namespace std;

void explainPair()
{

    pair<int, int> pr1 = make_pair(2, 3);
    cout << pr1.first << " " << pr1.second << endl;

    pair<int, char> pr2 = {9, 'A'};
    cout << pr2.first << " " << pr2.second << endl;

    pair<pair<int, char>, int> pr3 = {{9, 'A'}, 9};
    cout << pr3.first.first << " " << pr3.first.second << " " << pr3.second;
}

void explainVector()
{
    vector<int> v;
    v.push_back(90);
    v.push_back(91);
    v.emplace_back(93);

    cout << v.size() << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;

    /*              Iterator
    vector<int>::iterator beginItr = v.begin();
    vector<int>::iterator endItr = v.end(); 
    
    Instead of writing such big syntax we can have a 
    simple auto keyword
    
    auto = vector<int>::iterator it;
    
    auto beginItr = v.begin();
    auto endItr = v.end();

    for (auto i = v.begin(); i < v.end(); i++)
    {
        cout << *i << " ";
    }

    We can do a even better                                */
    for(auto it : v){
        cout << it << " ";
    }

    cout << endl;

    /*
        Reference and Copy 

    1.Copy
        for(auto it : v)
        cout << it; 
    2. Reference
        for(auto &it : v)
        cout << it;

    Reverse Iterator

    */
   auto revBegin = v.rbegin();
   auto revEnd = v.rend();

   for(auto i = revBegin;i < revEnd;i++){
    cout << *i << " ";
   }
};

int main()
{

    explainVector();
}