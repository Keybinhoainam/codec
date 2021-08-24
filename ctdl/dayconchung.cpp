#include<bits/stdc++.h>
using namespace std;
void nhap(int a[],int n)
{
	for(int i=0;i<n;i++)cin>>a[i];
}

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n1,n2,n3;
		cin>>n1>>n2>>n3;
		int a[n1],b[n2],c[n3];
		nhap(a,n1);
		nhap(b,n2);
		nhap(c,n3);
		int i,j,k,check=0;
		i=j=k=0;
		while(i<n1&&j<n2&&k<n3)
		{
			if(a[i]==b[j]&&b[j]==c[k])
			{
				cout<<a[i]<<" ";
				check=-1;
				i++;j++;k++;
			}
			else
			{
				if(a[i]<b[j])i++;
				else
				{
					if(b[j]<c[k])j++;
					else k++;
				}
			}
		}
		if(check==0)cout<<"NO";
		cout<<endl;
	}
}

