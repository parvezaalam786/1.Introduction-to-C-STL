/// Templates allows us to use same functions over different data types
///Functions are general

#include<iostream>
using namespace std;
template <class T>
void printArr(T arr[],int n)
{
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    ///int arr[] = {1,2,3,4,5};
    char arr[] = "abcde";
    printArr(arr,5);
    return 0;
}

