#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k;
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
	
	{
		cout<<" ";
	}
	for(k=i;k>=0;k--)
	{
		cout<<k+1;
	}
	cout<<endl;
	}
	return 0;
}
