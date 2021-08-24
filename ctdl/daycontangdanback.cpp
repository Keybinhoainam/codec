#include<bits/stdc++.h>
using namespace std;
int a[100000],x[100000];
int n,k,dem;
void kt(int bd,int sopt)
{
	for(int i=bd;i<=n;i++)
	{
		if(x[sopt-1]<a[i])
		{
			x[sopt]=a[i];
			if(sopt==k)
			{
//				for(int j=1;j<=k;j++)cout<<x[j]<<" ";
//				cout<<endl;
				dem++;
			}
			else if(sopt<k)kt(i+1,sopt+1);
		}
	}
}
int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)cin>>a[i];
	dem=0;
	x[0]=INT_MIN;
	kt(1,1);
	cout<<dem<<endl;
}

