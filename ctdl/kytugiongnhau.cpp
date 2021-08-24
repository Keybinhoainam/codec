#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int chen,xoa,copy;
		cin>>chen>>xoa>>copy;
		int a[n+5];
		a[1]=chen;
		for(int i=2;i<=n;i++)
		{
			if(i%2==0)
			{
				a[i]=min((a[i-1]+chen),(a[i/2]+copy));
			}
			else
			{
				a[i]=min((a[i-1]+chen),(a[(i+1)/2]+copy+xoa));
			}
//			cout<<i<<"  "<<a[i]<<endl;
		}
		cout<<a[n]<<endl;
	}
}

