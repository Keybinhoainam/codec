#include<bits/stdc++.h>
using namespace std;
int kq;
int main()
{
	int n;
	cin>>n;
	char x,s[n];
	int a[4];
	a[0]=a[1]=a[2]=0;
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
		if(s[i]=='X')a[0]++;
		if(s[i]=='T')a[1]++;
		if(s[i]=='D')a[2]++;
//		s1[i]=s[i];
	}
//	cout<<s[2];
int dem=0;
	for(int i=0;i<a[0];i++)
	{
		if(s[i]=='T')
		{
			for(int j=a[0];j<n;j++)
			{
				if(s[j]=='X')
				{
					swap(s[j],s[i]);
					dem++;
					break;
				}
			}
		}
		else
		{
			if(s[i]=='D')
			{
				for(int j=n-1;j>=a[0];j--)
				{
					if(s[j]=='X')
					{
						swap(s[j],s[i]);
						dem++;
						break;
					}
				}
			}
		}
	}
	for(int i=a[0];i<a[1]+a[0];i++)
	{
		if(s[i]=='D')
		{
			for(int j=a[1]+a[0];j<n;j++)
			{
				if(s[j]=='T')
				{
					swap(s[j],s[i]);
					dem++;
					break;
				}
			}
		}
	}
	cout<<dem<<endl;
//	kt
}

