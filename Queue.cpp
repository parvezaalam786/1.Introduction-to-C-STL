#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int> q1;
    for(int i=10;i<=100;i+=10)
    {
        q1.push(i);
    }
    while(!q1.empty())
    {
     cout<<q1.front()<<" ";
     q1.pop();
    }
    return 0;
}
