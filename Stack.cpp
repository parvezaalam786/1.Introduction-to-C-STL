#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> s1;
    for(int i=10;i<=100;i+=10)
    {
        s1.push(i);
    }
    while(!s1.empty())
    {
        cout<<s1.top()<<" ";
        s1.pop();
    }
    return 0;
}
