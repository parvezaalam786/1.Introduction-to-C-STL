#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int K,Q,i,j,x,y,dist,t;
    ///freopen("test.txt","r",stdin);
    cin>>Q>>K;
    multiset<long long int> m1;
    multiset<long long int>::iterator it1;
    while(Q--)
    {
        cin>>t;
        if(t==1)
        {
            cin>>x>>y;
            dist = x*x+y*y;
            m1.insert(dist);
        }
        else
        {
         it1 = m1.begin();
         for(i=0;i<K-1;i++)
         {
             it1++;
         }
         cout<<*it1<<endl;
        }
    }
    return 0;
}
