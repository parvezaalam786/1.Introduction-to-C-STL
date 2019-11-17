#include<bits/stdc++.h>
using namespace std;
///By default, priority queue is max heap ,,,in order to make it min heap we have to give a predicate
/// function in which operator() should be overloaded in class
struct comparator{
    bool operator()(int a,int b)
    {
        if(a<b) return false;
        return true;
    }
};
int main()
{

    int arr[10] = {19,23,65,34,12,4,5};
    ///priority_queue<int> pq;   /// Max heap by default
    priority_queue<int, vector<int>, comparator> pq;   /// Min heap
    for(int i=0;i<7;i++)
    {
        pq.push(arr[i]);
    }
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}
/// Building a heap takes O(n) time
