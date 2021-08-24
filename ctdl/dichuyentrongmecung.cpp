#include<bits/stdc++.h>
using namespace std;
int check;
void kt(int i,int j,int n,int a[100][100],map<int,char>s,int t)
{
	if(i==n&&j==n)
	{
		check=1;
		for(int k=0;k<2*(n-1);k++)
		{
			cout<<s[k];
		}
		cout<<" ";
	}
	else
	{
		for(int k=0;k<=1;k++)
		{
			if(k==0&&a[i+1][j])
			{
//				cout<<a[i+1][j]<<"     ";
//				if(a[i+1][j])
//				{
//					cout<<"D";
					s[t]='D';
				
				kt(i+1,j,n,a,s,t+1);
//				cout<<" ";
//				}
			}
//			else
//			{
//				cout<<a[i][j+1]<<"     ";
				if(a[i][j+1]&&k==1)
				{
//				cout<<"R";
					s[t]='R';
					kt(i,j+1,n,a,s,t+1);
//				cout<<" ";
				}
//			}
//			cout<<endl;
		}
//		}
	}
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int a[100][100];
		map<int,char>s;
		for(int i=0;i<=n+1;i++)
		{
			for(int j=0;j<n+2;j++)
			{
				if(i==0||j==0||i==n+1||j==n+1)a[i][j]=0;
			else cin>>a[i][j];
//a[i][j]=1;
			}
		}
		check=0;
		if(a[1][1]==1)kt(1,1,n,a,s,0);
		if(check==0)cout<<-1;
		cout<<endl;
		
	}
}

