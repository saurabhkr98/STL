#include <bits/stdc++.h>
using namespace std;
int main()
{
    //dynamic in nature
    //has features of queue and stack
    //stores elements in descending fashion by default
    priority_queue<int> pq;
    pq.push(23);//{23}
    pq.push(41);//{41.23}
    pq.push(12);//{41,23,12}
    pq.push(39);//{41,39,23,12}
    cout<<pq.top()<<endl;
    cout<<pq.size()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    cout<<pq.size()<<endl;
    cout<<pq.empty()<<endl;
    priority_queue<int> pq1,pq2;
    pq1.swap(pq2);

    //storing in ascending order
    priority_queue<int, vector<int>, greater<int>> pq3;
    pq3.push(23);//{23}
    pq3.push(12);//{12,23}
    pq3.push(56);//{12,23,56}
    cout<<pq3.top()<<endl;//12
    //all functions remains same as above
}