#include<bits/stdc++.h>
using namespace std;
int a[1000005];
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		map<long long,long long>c;
//		long long maxc=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			c[a[i]]++;
//			maxc=max(maxc,c[a[i]]);
		}
//		c[a[n]]=maxc+1;
		stack<long long>q,kq;
//		int t=INT_MAX;
//		q.push(n);
		int i=n-1;
		while(i>=0)
		{
//			cout<<q.size()<<" "<<i<<"\t";
			if(!q.empty()&&c[a[q.top()]]>c[a[i]])
			{
//				cout<<q.size()<<" "<<i<<"\t";
//				if(c[a[q.top()]]==maxc+1)cout<<-1<<" ";
				kq.push(a[q.top()]);
				q.push(i--);
				
			}
			else
			{
				if(q.empty())
				{
						kq.push(-1);
					q.push(i--);
				}
				else q.pop();
			}
//			cout<<endl;

		}
		while(!kq.empty())
		{
			cout<<kq.top()<<" ";kq.pop();
		}
		cout<<endl;
		
	}
}

