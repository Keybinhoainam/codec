#include<bits/stdc++.h>
using namespace std;
//class point{
//	private:
//		float x,y;
//	public:
//		void nhap(){
//			cout<<"x,y= ";cin>>x>>y;
//		}
//		float getx(){
//			return x;
//		}
//		float gety()
//		{
//			return y;
//		}
//		float kc(point);
//};
//float point::kc(point t)
//{
//	float t1=x-t.getx();
//	float t2=y-t.gety();
//	return sqrt(t1*t1+t2*t2);
//}
class Nguoi{
	private:
		string ten;
		int tuoi;
		int gioitinh;
		int id;
		int money;
	public:
		virtual void nhap();
		virtual void hienthi();
};
class SinhVien:public Nguoi{
	private:
		int diem;
		int hocphi;
		string nganh;
	public:
		virtual void nhap();
		virtual void hienthi();
};
void SinhVien::nhap(){
	cout<<"ten,tuoi,gioitinh,id,money: ";
	cin>>ten>>tuoi>>gioitinh>>id>>money;
	cout<<"diem,hoc phi,nganh: ";
	cin>>di
}
void SinhVien::hienthi()
{
	cout<<"ten: "<<ten<<endl;
	cout<<"tuoi: "<<tuoi<<endl;
	cout<<"giotinh"<<giotinh<<endl;
	cout<<"id"<<id<<endl;
	cout<<"money: "<<money<<endl;
}
class GiaoVien:public Nguoi{
	private:
		string name;
	public:
		virtual void nhap();
		virtual void hienthi();
};
int main()
{
	Shape *s;
}

