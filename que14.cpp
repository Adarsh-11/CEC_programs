#include<iostream>
using namespace std;
int main()
{
	int n,i,k,j;
	cin>>n;
	for(i=0;i<n;i++)
	{
			for(j=0;j<n-i-1;j++)
	{
		cout<<" ";
	}
	for(k=0;k<=i;k++)
	{
		cout<<"* ";
	}
	cout<<endl;
	}
	for(i=0;i<n-1;i++)
	{
			for(j=0;j<i+1;j++)
	{
		cout<<" ";
	}
	for(k=0;k<=n-i-2;k++)
	{
		cout<<"* ";
	}
	cout<<endl;
	}
	return 0;
}
