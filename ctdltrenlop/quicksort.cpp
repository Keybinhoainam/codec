#include<bits/stdc++.h>
using namespace std;
void QS(int A[], int left, int right){
	int i=left,j=right;
	int x=(left+right)/2;
	do{
		while(A[i]<x && i<right) i++;
		while(A[j]>x && j>left) j--;
		if (i<=j){swap(A[i],A[j]);i++;j--;}
	}
	while(i<=j);
		if (left<j) QS(A,left,j);
		if (i<right) QS(A,i,right);

}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=1;i<=n;i++)cin>>a[i];
	QS(a,1,n);
	for(int i=1;i<=n;i++)cout<<a[i]<<" ";
}

