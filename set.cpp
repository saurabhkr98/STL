#include <bits/stdc++.h>
using namespace std;
int main()
{
    //insert distinct elements in ascending order by default
    //iterator works here
    set<int> st;
    st.insert(23);//{23}
    st.insert(12);//{12,23}
    st.insert(12);//{12,23}
    st.insert(51);//{12,23,51}
    //functions are same as vectors
    //like end,begin,rbegin,rend,swap,clear,size,empty
    auto it=st.begin();
    cout<<*(it)<<endl;
    //iterator is a pointer
    it=st.find(23);//finds position of element 
    cout<<*(it)<<endl;
    //if element does not exist in set then it points to adress after last element
    //check for existence, if(it.find(x)!=it.end()) then element exists in set
    cout<<st.count(23)<<endl;//1 if element exists
    cout<<st.count(41)<<endl;//0 if element does not exist

    st.erase(it);
    st.insert(38);
    st.insert(98);
    st.insert(3);
    //{3,12,38,51,98}
    //erase a range
    auto it1=st.find(12);
    auto it2=st.find(51);
    // erases from given starting point to one element before given ending point
    st.erase(it1,it2);//{3,51,98}

    it=st.lower_bound(51);
    cout<<*(it)<<endl;

    it=st.upper_bound(51);
    cout<<*(it)<<endl;

}