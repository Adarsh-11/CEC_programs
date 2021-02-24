#include<iostream>
using namespace std;
int main()
{
	int n,i,k,j,q;
	cin>>n;
	for(i=0;i<n;i++)
	{
			for(j=0;j<n-i-1;j++)
	{
		cout<<" ";
	}
	for(k=0;k<2*i+1;k++)
	{
		cout<<k+1;
	}
	cout<<endl;
	}
	q=0;
	for(i=n-1;i>0;i--)
	{
			for(j=0;j<q+1;j++)
	{
		cout<<" ";
	}
	
	for(k=0;k<=2*q-1;k++)
	{
		cout<<k+1;
		q++;
	}
	cout<<endl;
	}
	return 0;
}
