#include<bits/stdc++.h>
using namespace std;
int dem;
void kt(int s,int n)
{
	if(s==0&&n==0)dem++;
	else
	{
		if(n>0&&s>0)
		{
			for(int i=1;i<=6;i++)
			{
				kt(s-i,n-1);
			}
		}
		else return;
	}
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int  n,s;
		cin>>n>>s;
		dem=0;
		kt(s,n);
		cout<<dem<<endl;
	}
}

