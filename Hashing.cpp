#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string,int> m1;
    ///Insertion 1 type
    m1["Apple"] = 10;
    m1["Mango"] = 20;

    ///insertion 2 type
    m1.insert(make_pair("Banana",30));

    ///Search
    if(m1.count("Apple")==1)
        cout<<"Cost of apple :"<<m1["Apple"]<<"\n";
    m1["Guava"] = 123;
    if(m1.count("Guava")==0)
        cout<<"Does not exist"<<"\n";
    else
        {
            cout<<"Guava cost is:"<<m1["Guava"]<<"\n";
        }
     ///delete function
     m1.erase("Apple");

    ///Iterators to search
    auto a = m1.find("Apple");
    if(a!=m1.end())
    {
        cout<<(a->second)<<"\n";  ///this returns pair
    }
    else cout<<"Not found\n";
    return 0;
}
