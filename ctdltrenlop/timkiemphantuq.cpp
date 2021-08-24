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
int timkiem(int q,int a[],int l,int r)
{
	
	int mid=(l+r)/2;
	if(a[mid]==q)return mid;
	if(l>=r)return -1;
	if(q<=a[mid]&&l<r)return timkiem(q,a,l,mid);
	if(q>a[mid]&&l<r)return timkiem(q,a,mid+1,r);
}
int main()
{
	int n,q;
	cin>>n>>q;
	int a[n];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	QS(a,1,n);
	cout<<timkiem(q,a,1,n);
}

