#include<bits/stdc++.h>
using namespace std;
int a[10][10];
long long kq;
void kt(long long tong,int i,map<int,bool>cot,map<int,bool>nguoc,map<int,bool>xuoi)
{
	for(int j=0;j<8;j++)
	{
		if(cot[j]==0&&xuoi[i+j]==0&&nguoc[i+7-j]==0)
		{
			cot[j]=1;
			xuoi[i+j]=1;
			nguoc[i+7-j]=1;
			if(i==7)
			{
				kq=max(kq,tong+a[i][j]);
				
			}
			else kt(tong+a[i][j],i+1,cot,nguoc,xuoi);
			cot[j]=0;
			xuoi[i+j]=0;
			nguoc[i+7-j]=0;
		}
	}
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		for(int i=0;i<8;i++)
		{
			for(int j=0;j<8;j++)cin>>a[i][j];
		}
		map<int,bool>cot,nguoc,xuoi;
		kq=INT_MIN;
		kt(0,0,cot,nguoc,xuoi);
		cout<<kq<<endl;
	}
}
