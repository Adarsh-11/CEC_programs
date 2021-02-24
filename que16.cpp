#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int i,j,k,q;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        for(k=0;k<=i;k++)
        {
            cout<<k++;
        }
        q=i;
        for(k=0;k<i;k++)
        {
            cout<<q--;
        }
        cout<<"\n";
    }

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<=i;j--)
        {
            cout<<" ";
        }
        for(k=0;k<n-i-1;k++)
        {
            cout<<k+1;
        }
        for(j=n-2-i;j>=1;j--)
        {
            cout<<j;
        }
        cout<<"\n";
    }
    return 0;
}



