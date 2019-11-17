#include<iostream>
using namespace std;
void PrintFactorial(int *arr,int &n)
{
	for(int i=n-1;i>=0;i--)
		cout<<arr[i];
	cout<<"\nNo. of digits is :"<<n;
}
void multiply(int *arr,int x,int &n)
{
	int carry = 0;
	int prod = 0;
	for(int i=0;i<n;i++)
	{
		prod = arr[i]*x+carry;
		arr[i] = prod%10;
		carry = prod/10;
	}
	while(carry!=0)
	{
		arr[n++] = carry%10;
		carry = carry/10;
	}
}
void Factorial(int n)
{
	int arr[1000]={0};
	arr[0]=1;
	int x=1;  /// denotes the index of the array
	for(int i=1;i<=n;i++)
	{
		multiply(arr,i,x);
	}
	PrintFactorial(arr,x);
}
int main()
{
	int n;
	cout<<"Enter the number to find factorial: ";
	cin>>n;
	Factorial(n);
}