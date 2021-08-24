#include<bits/stdc++.h>
using namespace std;
char x;
	int k;
	int c1[500];
char c[1000];
void sinh(int vt,char st)
{
	if(vt==k)
	{
		for(int i=0;i<k;i++)
		{
			cout<<c[i];
		}
		cout<<endl;
		return;
	}
	for(char i=st;i<=x;i++)
	{
//		if(c1[i]==0)
//		{
////			c1[i]=1;
			c[vt]=i;
			sinh(vt+1,i);
			c1[i]=0;
//		}
	}
}
int main()
{
	memset(c1,0,sizeof(c1));
	cin>>x>>k;
	sinh(0,'A');
}

