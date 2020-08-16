#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> ls;
    ls.push_back(2);
    ls.push_front(4); //not in vector
    for(auto it : ls)
        cout<<it<<" ";
    cout<<endl;

    ls.pop_back();
    for(auto it : ls)
        cout<<it<<" ";
    cout<<endl;

    ls.push_back(23);
    ls.push_front(12);
    for(auto it : ls)
        cout<<it<<" ";
    cout<<endl;

    ls.pop_front(); //not in vector
    for(auto it : ls)
        cout<<it<<" ";
    cout<<endl;

    list<int>::iterator it = ls.begin();

    advance(it,2); //we can not move directly in a list, use advance. here moves to 3rd position

    ls.insert(it,34);
    for(auto it : ls)
        cout<<it<<" ";
    cout<<endl;
    cout<<ls.empty()<<endl;
    cout<<ls.front()<<endl;
    cout<<ls.back()<<endl;
    //rest all functions are same as vector like begin, end, rend, rbegin, clear, empty, insert, size, swap

    //major difference between vector and list is that we can use pop_front() and push_front() in list
    //we can not directly go to a certain index in a list, use advance for changing iterator position   
}