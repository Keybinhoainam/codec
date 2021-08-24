#include<bits/stdc++.h>
using namespace std;
int main()
{
//	int T;
//	cin>>T;
//	while(T--)
//	{
//		
//	}
	int a[4],k;
	cin>>a[0]>>a[1]>>a[2]>>k;
	sort(a,a+3);
	int a1=(a[0]>=k-1)?k-1:a[0];
	int a2=(a[1]>=k-1)?k-1:a[1];
	int kq=a1+a2+k;
	cout<<kq<<endl;
}

