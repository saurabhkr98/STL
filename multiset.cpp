#include <bits/stdc++.h>
using namespace std;
int main()
{
    //all functions os set
    //but can also store multiple values
    multiset<int> m;
    m.insert(1);//{1}
    m.insert(1);//{1,1}
    m.insert(1);//{1,1,1}
    cout<<m.count(1)<<endl;
    m.erase(1);//will erase all occurences of 1
    cout<<m.count(1)<<endl;

    m.insert(1);//{1}
    m.insert(1);//{1,1}
    m.insert(1);//{1,1,1}
    //how to delete one 1
    m.erase(m.find(1));//{1,1}
    cout<<m.count(1)<<endl;
    m.insert(1);//{1,1,1}

    //all other set functions applies here too


    /*
    void explainUSet() {
	unordered_set<int> st;
	// lower_bound and upper_bound function
	// does not works, rest all functions are same
	// as above,  it does not stores in any
	// particular order it has a better complexity
	// than set in most cases, except some when collision happens
    }
    */
}