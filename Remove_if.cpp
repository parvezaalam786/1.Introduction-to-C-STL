#include<iostream>
#include<algorithm>
using namespace std;
int l=0;
bool fun(int n)
{
    if(n<=10) {l++; return true;}
    else return false;
}
int main()
{
    int arr[] = {10,50,55,32,5,2,1,22,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(int);
    ///remove all the elements less than 10
    remove_if(arr,arr+n,fun);
    /// fun is Predicate function which gives boolean value
    for(int i=0;i<n-l;i++)
        cout<<arr[i]<<" ";
    return 0;
}
