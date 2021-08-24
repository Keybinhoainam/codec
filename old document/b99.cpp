#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
    int T;
	cin>>T;
	while(T--)
	{
		int  n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)cin>>a[i];
		long long dem=0;
		int i=0,j=n-1;
		while(i<=j)
		{
			if(a[i]==a[j])
			{
				i++;
				j--;
			}
			else
			{
				if(a[i]>a[j])
				{
					j--;
					a[j]=a[j+1]+a[j];
					dem++;
				}
				else
				{
					i++;
					a[i]=a[i-1]+a[i];
					dem++;
				}
			}
		}
		cout<<dem<<endl;
	 } 
} 
