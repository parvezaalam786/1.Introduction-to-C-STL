#include<bits/stdc++.h>
using namespace std;
bool pp(int p1,int p2)
{
    return p1>p2;
}
int main()
{
   int arr[] = {10,2,8,7,6,3,4,5,6,8,7,5,4};
   int n = sizeof(arr)/sizeof(int);

   sort(arr,arr+n);  ///sorts in increasing order
   for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }
   cout<<"\n";
   sort(arr,arr+n,pp);  ///sorts in decreasing order..pp is auxiliary function
   for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }

}
