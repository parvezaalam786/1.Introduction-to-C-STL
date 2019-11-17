#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<char> v(10);
    for(int i=0;i<10;i++){
        cin>>v[i];
    }
    vector<char> v2(10);
    reverse_copy(v.begin(),v.end(),v2.begin());
    /// from where to where and from where to start writing in third part
    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" ";
    }
    return 0;
}
