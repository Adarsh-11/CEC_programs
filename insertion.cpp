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
for( i=1;i<n;i++)
{
	min=a[i];
j=i-1;
while(j>=0&&min<a[j]){
	a[j+1]=a[j];
	j--;	
}
a[j+1]=min;
}
for(i=0;i<n;i++)
{
	cout<<a[i]<<" ";
}
	return 1;
}
