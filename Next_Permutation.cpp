#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v(6);
    for(int i=0;i<6;i++)
    {
        cin>>v[i];
    }
    next_permutation(v.begin(),v.end());
    for(int i=0;i<6;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}

