#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,M,K,T,i,j;
    cin>>T;
    char arr[55][55];
    while(T--)
    {
        cin>>N>>M>>K;
        vector<int> v1(N,0);
        for(i=0;i<N;i++)
        {
            for(j=0;j<M;j++)
            {
                cin>>arr[i][j];
                if(arr[i][j]=='*')
                    v1[i] = v1[i]+1;
            }
        }
        sort(v1.begin(),v1.end(),less<int>());
        i=0;
        while(K>0 && i<N && (M-v1[i]>v1[i]))
        {
            K--;
            v1[i] = M-v1[i];
            i++;
        }
        auto it1 = v1.begin();
        while(K!=0)
        {
            it1 = min_element(v1.begin(),v1.end());
            *it1 = M - *it1;
            K--;
        }
        int sum = 0;
        for(it1 = v1.begin();it1!=v1.end();it1++)
        {
            sum+=*it1;
        }
        cout<<sum<<endl;
        v1.clear();
    }

    return 0;
}
