#include<bits/stdc++.h>
using namespace std;
bool compare(string a,string b)
{
    return a>b;
}
int main()
{
    string s1("Parvez1");
    cout<<s1<<"\n";
    cout<<s1.length()<<"\n";
    string s2 = "Parvez2";
    cout<<s2<<"\n";
    string s3;
    getline(cin,s3);
    cout<<s3<<"\n";
    /// Array of strings
    string arr[]={"parvez1","parvez2","parvez3","parvez4"};
       sort(arr,arr+4,compare);
    for(int i=0;i<4;i++)
        cout<<arr[i]<<" ";
    return 0;
}
