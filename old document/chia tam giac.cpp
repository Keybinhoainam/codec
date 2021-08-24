#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		double n,h;
		cin>>n>>h;
		int i=1;
		while(i<n)
		{
			double t=sqrt(i/n)*h;
			printf("%.6lf ",t);
			i++;
		}
		cout<<endl;
	}
}

