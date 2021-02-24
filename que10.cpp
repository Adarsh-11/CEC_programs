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
	for(k=1;k<=(2*i)+1;k++)
	{
		cout<<"*";
	}
	cout<<endl;
	}
	return 0;
}
