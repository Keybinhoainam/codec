#include<bits/stdc++.h>
using namespace std;
void kt(int n)
{
	int t2,t3,t5,ugly[n+5];
	t2=t3=t5=0;
	int so2=2,so3=3,so5=5;
	ugly[0]=1;
	int min1;
	for(int i=1;i<n;i++)
	{
		min1=min(so2,min(so3,so5));
		ugly[i]=min1;
		if(min1==so2)
		{
			t2++;
			so2=ugly[t2]*2;
		}
		
			if(min1==so3)
		{
			t3++;
			so3=ugly[t3]*3;
		}
		
			if(min1==so5)
		{
			t5++;
			so5=ugly[t5]*5;
		}
		
		
	}
	cout<<ugly[n-1]<<endl;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		kt(n);
	}
}

