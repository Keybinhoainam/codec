#include<bits/stdc++.h>
using namespace std;
long long kt(int h[], int n) 
{ 
     long long max1,kq=0,tp,i=0;
     stack<int>a;
     while(i<n)
     {
     	if(a.empty()||h[a.top()]<=h[i])a.push(i++);
     	else
     	{
     		tp=a.top();
     		a.pop();
     		max1=h[tp]*(a.empty()?i:(i-a.top()-1));
     		kq=max(max1,kq);
		}
	 }
	 while(!a.empty())
	 {
	 	tp=a.top();
	 	a.pop();
	 	max1=h[tp]*(a.empty()?i:(i-a.top()-1));
	 	kq=max(max1,kq);
	 }
	 return kq;
}
int main()
{
	
		int n,m;
		cin>>m>>n;
		int a[n],h1[n],h2[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			h1[i]=a[i];
			h2[i]=m-a[i];
		}
		cout<<max(kt(h1,n),kt(h2,n))<<endl;
}

