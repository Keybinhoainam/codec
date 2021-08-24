#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        long long a[n1], b[n2], c[n3];
        for (long long i = 0; i < n1; i++)cin>>a[i];
        for (long long i = 0; i < n2; i++)cin >> b[i];
        for (long long i = 0; i < n3; i++)cin >> c[i];
        long long i=0,j=0,k=0,check=0;
        while(i<n1&&j<n2&&k<n3)
        {
        	if(a[i]==b[j]&&a[i]==c[k])
        	{
        		cout<<a[i]<<" ";
        		i++;
        		j++;
        		k++;
        		check=1;
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
		if(check==0)cout<<-1;
		cout<<endl;
    }
    return 0;
}
