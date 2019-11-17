#include<iostream>
using namespace std;
int main()
{
	/// Compute the number of people such that two people have same birthday with 50% chances
	float num = 365;
	float denom = 365;

	///p denotes the number of people having birthday on same date
	float p = 1;
	int n = 0;
	///p becomes less than 0.5 because we are starting from 1
	while(p>0.5)
	{
		p = p*(num)/denom;
		num--;
		n++;
	}
	cout<<"Number of people having same birthday with 50% chance is "<<n<<"("<<p<<")"<<endl;
	return 0;
}