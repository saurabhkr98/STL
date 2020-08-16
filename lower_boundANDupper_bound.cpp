#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={1,4,4,4,4,9,9,10,11};
    //lower bound and upper bound returns index
    //applies when sorted

    //lower_bound
    //if element is present then it returns the first occurence of element
    cout<<lower_bound(a,a+sizeof(a)/sizeof(a[0]),4)-a<<endl;
    //if element does not exist then returns the index of next greater element
    cout<<lower_bound(a,a+sizeof(a)/sizeof(a[0]),7)-a<<endl;
    cout<<lower_bound(a,a+sizeof(a)/sizeof(a[0]),12)-a<<endl;

    //upper_bound
    //element is present or not, 
    //it always returns the index of first element just greater than the given element
    cout<<upper_bound(a,a+sizeof(a)/sizeof(a[0]),4)-a<<endl;
    cout<<upper_bound(a,a+sizeof(a)/sizeof(a[0]),7)-a<<endl;
    cout<<upper_bound(a,a+sizeof(a)/sizeof(a[0]),12)-a<<endl;

    //for vectors
    //int index = lower_bound(v.begin(),v.end(),x)-v.begin();

    //4 questions
    //first occurence of x
    //last occurence of x
    //first occurence of element just greater than x
    //first occurence of element just smaller than x

    //binary search
    //returns boolean value if element is present or not
    cout<<binary_search(a,a+sizeof(a)/sizeof(a[0]),4)<<endl;
    cout<<binary_search(a,a+sizeof(a)/sizeof(a[0]),8)<<endl;
}