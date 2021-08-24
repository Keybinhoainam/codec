#include<bits/stdc++.h>
using namespace std;
class Nguoi{
	private:
		string ten;
		int tuoi;
		int id;
	public:
		static int count;
		void nhap();
		void hienthi();
		
};
int Nguoi::count=100;
void Nguoi::nhap()
{
	cout<<"ten: ";cin>>ten;
	cout<<"tuoi: ";cin>>tuoi;
	id=count++;
	
}
void Nguoi::hienthi()
{
	cout<<"ten: "<<ten<<" tuoi: "<<tuoi<<" ID: "<<id;
	
}
class SinhVien:public Nguoi
{
	private:
		float diemtoan,diemly,diemhoa;
	public:
		void nhap1();
		void hienthi1();
		int tong();
};
void SinhVien::nhap1()
{
	Nguoi::nhap();
		cout<<"toan: ";cin>>diemtoan;
		cout<<"ly: ";cin>>diemly;
		cout<<"hoa: ";cin>>diemhoa;
}
void SinhVien::hienthi1()
{
	Nguoi::hienthi();
	cout<<" toan: "<<diemtoan<<" ly: "<<diemly<<" hoa: "<<diemhoa;
}
int SinhVien::tong()
{
	return diemtoan+diemly+diemhoa;
}
class Lop{
	private:
		SinhVien sv[80];
		int n;
		int malop;
	public:
		static int count2;
		void nhap2();
		void hienthi2();
		void sx();
};
int Lop::count2=1;
void Lop::nhap2()
{
	cout<<"n= ";cin>>n;
	for(int i=0;i<n;i++)
	{
		sv[i].nhap1();
	}
	malop=count2++;
}
void Lop::sx()
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(sv[i].tong()<sv[j].tong())
			{
				swap(sv[i],sv[j]);
			}
		}
	}
}
void Lop::hienthi2()
{
	for(int i=0;i<n;i++)
	{
		cout<<"sinh vien "<<i+1<<": \n";
		sv[i].hienthi1();
		cout<<endl;
	}
}
int main() 
{
	Lop a;
	a.nhap2();
	a.sx();
	a.hienthi2();
}

