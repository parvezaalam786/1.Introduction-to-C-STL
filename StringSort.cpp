#include<bits/stdc++.h>
using namespace std;
bool pp(string p,string q)
{
    if(p.find(q)==0 ||q.find(p)==0)
    {
        return p.length()>q.length();
    }
    return p<q;
}
int main()
{
    int n,i;
    cin>>n;
    string arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n,pp);
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"\n";
    }
    return 0;
}
