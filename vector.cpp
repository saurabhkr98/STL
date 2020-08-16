#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v1; //{}
    
    v1.push_back(2); //{2}
    v1.emplace_back(4); //{2,4}

    vector<pair<int,int>> v2;
    v2.push_back({2,3});
    v2.emplace_back(31,23);

    vector<int> v3(4,100); //[100,100,100,100]
    vector<int> v4(3); //[0,0,0]
    vector<int> v5(v3); //v5=v3; v5 takes value of v3

    //iterators
    vector<int> v6={1,2,3,4};
    vector<int>::iterator it = v6.begin(); //first element
    cout<<*(it)<<endl;
    //vector<int>::iterator it = v.end(); // space after last element
    //vector<int>::iterator it = v.rend(); // space before first element, reverse end
    //vector<int>::iterator it = v.rbegin(); // last element
    //there can be only one iterator to a variable
for(auto it : v6)
        cout<<it<<" ";
    cout<<endl;
    cout<<v1[0]<<" "<<v1.at(0)<<endl; //means same
    cout<<v1.back()<<endl; //{2,4} prints last element
    v1.push_back(45);
    v1.push_back(56);

    for(vector<int>::iterator it=v1.begin();it!=v1.end();it++)
        cout<<*(it)<<" ";
    cout<<endl;
    //iterator is a pointer

    for(auto it=v1.begin();it!=v1.end();it++)
        cout<<*(it)<<" ";
    cout<<endl;

    for(auto it : v1)
        cout<<it<<" ";
    cout<<endl;

    int i;
    for(i=0;i<v1.size();i++)
        cout<<v1[i]<<" ";
    cout<<endl;

    v1.erase(v1.begin());
    for(auto it : v1)
        cout<<it<<" ";
    cout<<endl;

    v1.push_back(13);
    v1.erase(v1.begin()+2);
    for(auto it : v1)
        cout<<it<<" ";
    cout<<endl;

    v1.push_back(67);
    v1.push_back(100);
    v1.erase(v1.begin()+2,v1.begin()+4); // erases from given starting point to one element before given ending point
    for(auto it : v1)
        cout<<it<<" ";
    cout<<endl;

    vector<int> v(2,100);
    v.insert(v.begin(),300);
    for(auto it : v)
        cout<<it<<" ";
    cout<<endl;
    v.insert(v.begin()+1,2,34); //{300,34,34,100,100}  v.insert(position,count,inserted_value)
    for(auto it : v)
        cout<<it<<" ";
    cout<<endl;

    vector<int> copy = {2,3};
    v.insert(v.begin(),copy.begin(),copy.end()); //{2,3,300,34,34,100,100}
    for(auto it : v)
        cout<<it<<" ";
    cout<<endl;

    cout<<v.size()<<endl;
    v.pop_back();
    cout<<v.size()<<endl;

    vector<int> a={11,21};
    cout<<a.back()<<endl;
    cout<<a.front()<<endl;
    vector<int> b={3,4};
    a.swap(b); //swaps vectors

    v.clear(); //erases entire vector
    cout<<v.empty()<<endl; //true if vector is empty
}