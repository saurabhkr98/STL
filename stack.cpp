#include <bits/stdc++.h>
using namespace std;
int main()
{
    //stack does not have any iterator and has very limited functions
    //only top of stack is accessible
    stack<int> st;
    st.push(1); //{1}
    st.push(3); //{3,1}
    st.push(5); //{5,3,1}
    st.push(7); //{7,5,3,1}
    cout<<st.size()<<endl; //4
    st.pop(); //{5,3,1}
    cout<<st.size()<<endl; //3
    cout<<st.top()<<endl; //5
    cout<<st.empty()<<endl; //0
    stack<int> st1;
    stack<int> st2;
    st1.swap(st2);

}