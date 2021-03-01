#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n,i,j,pos,min,input;
	cin>>n;
	vector<int> a;
	for(i=0;i<n;i++)
	{
		cin>>input;
		a.push_back(input);
	}
for( i=0;i<n-1;i++)
{
	min=a[i];
	pos=i;
	for(j=i+1;j<n;j++)
	{
		if(min>a[j])
		{
			min=a[j];
			pos=j;
		}
	}
	swap(a[i],a[pos]);
	
}
for(i=0;i<n;i++)
{
	cout<<a[i]<<" ";
}
	return 1;
}
