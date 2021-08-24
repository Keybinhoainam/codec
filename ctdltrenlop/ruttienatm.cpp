#include<bits/stdc++.h>
using namespace std;
void Greedy(){ 
	x[0] = 1; used[0] = 1; 
	i = 0; 
	while (i<n){ 
		i++; 
		b = INT_MAX; 
		for (j=1, j<n; j++) 
		if used[j]==0 and c[x[i-1],j]<b){
	 		b = c[x[i-1],j]; xi = j; 
	} 
		x[i] = xi; used[xi]=1; 
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
	}
}

