#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr{1,8,7,6,3,4,5,6,7,8,9,8,7,7};
    sort(arr.begin(),arr.end());
    for(auto i=arr.begin();i!=arr.end();i++)
        cout<<*i<<" ";
    cout<<"\n";
    auto up = upper_bound(arr.begin(),arr.end(),7);
    auto down = lower_bound(arr.begin(),arr.end(),7);
    cout<<"Occurence is "<<up-down<<"\n";
}


///Upper bound is for last occurence and lower bound is for first occurence
