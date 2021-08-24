#include<bits/stdc++.h>
using namespace std;
long long dem;
void kt(int i,int j,int n,int m,int a[100][100],map<int,char>s,int t)
{
	if(i==n-1&&j==m-1)
	{
		dem++;
	}
	else
	{
		for(int k=0;k<=1;k++)
		{
			if(i+1<n&&j<m&&k==0)
			{
//				cout<<a[i+1][j]<<"     ";
//				if(a[i+1][j])
//				{
//					cout<<"D";
					s[t]='D';
				
				kt(i+1,j,n,m,a,s,t+1);
//				cout<<" ";
//				}
			}
//			else
//			{
//				cout<<a[i][j+1]<<"     ";
				if(i<n&&j+1<m&&k==1)
				{
//				cout<<"R";
					s[t]='R';
					kt(i,j+1,n,m,a,s,t+1);
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
		int n,m;
		cin>>n>>m;
		int a[100][100];
		map<int,char>s;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
//				if(i==0||j==0||i==n+1||j==n+1)a[i][j]=0;
			cin>>a[i][j];
//a[i][j]=1;
			}
		}
//		check=0;
		dem=0;
		kt(0,0,n,m,a,s,0);
		cout<<dem;
//		if(check==0)cout<<-1;
		cout<<endl;
		
	}
}

