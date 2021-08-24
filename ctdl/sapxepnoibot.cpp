#include<bits/stdc++.h>
using namespace std;
int main()
{
//	int T;
//	cin>>T;
//	while(T--)
//	{
		int n;
		cin>>n;
		int a[n],check,t=1;
		for(int i=0;i<n;i++)cin>>a[i];
		for(int i=0;i<n-1;i++)
		{
			check=0;
			for(int j=0;j<n-1-i;j++)
			{
				if(a[j]>a[j+1])
				{
					swap(a[j],a[j+1]);
					check=1;
				}
			}
			if(check==1)
			{
				cout<<"Buoc "<<t++<<": ";
				for(int j=0;j<n;j++)
				{
					cout<<a[j]<<" ";
				}
				cout<<endl;
			}
		}
	
}

