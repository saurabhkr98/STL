#include <bits/stdc++.h>
using namespace std;
int main()
{
    //does not have iterator
    queue<int> q;
    q.push(1); //{1}
    q.push(2); //{1,2}
    q.push(3); //{1,2,3}
    q.push(4); //{1,2,3,4}
    cout<<q.size()<<endl; //4
    q.pop(); //{2,3,4}
    cout<<q.size()<<endl; //3
    cout<<q.front()<<endl; //2
    cout<<q.back()<<endl; //4
    cout<<q.empty()<<endl; //0 for not empty
    queue<int> q1,q2;
    q1.swap(q2);
}