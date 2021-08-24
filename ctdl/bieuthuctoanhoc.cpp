#include<bits/stdc++.h>
using namespace std;
int a[20],check;
bool chuaxet[1000];
void tinh(int x[],int kq,int t)
{
	if(check==1)return;
	if(t==5&&kq==23)
	{
		check=1;
		return;
	}
	if(t==5&&kq!=23)return;
	for(int i=0;i<3;i++)
	{
		if(i==0)tinh(x,kq+x[t],t+1);
		if(i==1)tinh(x,kq-x[t],t+1);
		if(i==2)tinh(x,kq*x[t],t+1);
//		if(i==3&&kq%x[t]==0)tinh(x,kq/x[t],t+1);
	}
}
void hoanvi(int t,int x[])
{
	if(check==1)return;
	if(t==5)
	{
		
		tinh(x,x[0],1);
		return;
	}
//	cout<<"Ok\n";
	for(int i=0;i<5;i++)
	{
		if(chuaxet[i]==0)
		{
			chuaxet[i]=1;
			x[t]=a[i];
			hoanvi(t+1,x);
			chuaxet[i]=0;
		}
	}
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		for(int i=0;i<5;i++)cin>>a[i];
		check=0;
		int x[20];
		memset(chuaxet,0,sizeof(chuaxet));
		hoanvi(0,x);
		if(check==0)cout<<"NO";
		else cout<<"YES";
		cout<<endl;
	}
}

