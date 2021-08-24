#include<bits/stdc++.h>
using namespace std;
class SV{
	friend void sxtheodiem(SV[],int);
	private:
		long long ID;
		string ten;
		int diem;
	public:
		void nhap();
		void hienthi();
};
void SV::nhap()
{
	cout<<"ID: ";cin>>ID;
	fflush(stdin);
	cout<<"ten: ";getline(cin,ten);
	do{
		cout<<"diem: ";cin>>diem;
	}while(diem>10||diem<0);
}
void SV::hienthi()
{
	cout<<"ID: "<<ID<<" ten: "<<ten<<" diem: "<<diem<<endl;
}
void nhapdssv(SV a[],int &n)
{
	cout<<"n= ";cin>>n;
	for(int i=0;i<n;i++)a[i].nhap();
}
void hienthidssv(SV a[],int &n)
{
	for(int i=0;i<n;i++)a[i].hienthi();
}
void sxtheodiem(SV a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i].diem<a[j].diem)
			{
				swap(a[i],a[j]);
			}
		}
	}
}
int main()
{
	SV a[10];
	int n;
	nhapdssv(a,n);
	hienthidssv(a,n);
	sxtheodiem(a,n);
	hienthidssv(a,n);
}

