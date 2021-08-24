#include<bits/stdc++.h>
using namespace std;
int a[100];
map<int,bool>used;
int n,k1;
void hoanvi(int i)
{
	for(int j=1;j<=n;j++)
	{
		if(used[j]==0)
		{
		a[i]=j;
		if(i==n)
		{
			for(int k=1;k<=n;k++)cout<<a[k]<<" ";
			cout<<endl;
		}
		else 
		{
			used[j]=1;
			hoanvi(i+1);
			used[j]=0;
			
		}
			}	
	}
}
int main()
{
	
		cin>>n;
		a[0]=0;
		hoanvi(1);
}

