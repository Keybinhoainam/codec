#include<bits/stdc++.h>
using namespace std;
struct people{
	int id;
	bool notruoi;
	bool vetbot;
	bool tk;
};
vector<people>nhom1,nhom2;
void chianhom(int n,people nd[])
{
	cout<<"chia dan thanh cac nhom: "; 
	for(int i=0;i<n;i++)
	{
		if(nd[i].notruoi==1&&nd[i].vetbot==1)
		{
			nhom1.push_back(nd[i]);
		}
		else nhom2.push_back(nd[i]);
	}
	cout<<"\nnhom 1:\n";
	for(int i=0;i<nhom1.size();i++)
	{
		cout<<nhom1[i].id<<endl;
	}
	cout<<"nhom 2:\n";
	for(int i=0;i<nhom2.size();i++)
	{
		cout<<nhom2[i].id<<endl;
	}
}
void rasoat(int n2)
{
	int i=0;j=0;
	while(i<nhom1.size()&&i+1<n1&&j<n2)
	{
		if(nhom1[i].tk==1)return nhom1[i].id;
		if(nhom1[i+1].tk==1)return nhom1[i].id;
		if(linh[j].tk==1)return j;
		i+=2;
		j++;
	}
	if(i==n-1&&nd[i].tk==1)return i;
	else
	{
		if(i+1<n1)rasoat(n1)
	}
}
int main()
{
	cout<<"nhap so nguoi dan: ";
	int n1,n2;
	cin>>n1;
	cout<<"nhap so linh: ";
	cin>>n2;
	cout<<"quy uoc:\n1 la co\n0 la khong co\n";
	people nd[n1];
	cout<<"nhap cac dac diem cua nguoi dan(nhap id,not ruoi,vet bot,thich khack): \n";
	for(int i=0;i<n1;i++)
	{
//		cout<<"nhap id,not ruoi,vet bot,thich khack:";
		cin>>nd[i].id>>nd[i].notruoi>>nd[i].vetbot>>nd[i].tk;
	}
	cout<<"nhap cac dac diem cua linh(nhap id,not ruoi,vet bot,thich khack): \n";
	people linh[n2];
	for(int i=0;i<n2;i++)
	{
//		cout<<"nhap id,not ruoi,vet bot,thich khack:";
		cin>>linh[i].id>>linh[i].notruoi>>linh[i].vetbot>>linh[i].tk;
	}
	chianhom(n1,nd);
	rasoat(n1,nd,n2,linh);
}

