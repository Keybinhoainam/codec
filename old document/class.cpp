#include<iostream>
#include<iomanip>
using namespace std;
class time{
	private:
		int gio,phut,giay;
	public:
		time(){
			gio=phut=giay=0;
		}
		~time(){
			cout<<endl<<"ham huy duoc goi";
		}
		time(int,int,int);
		void nhap();
		void hienthi();
		
};
time::time(int g,int p,int gy)
{
	gio=(g>=0&&g<=24)?g:0;
	phut=(p>=0&&p<=60)?p:0;
	giay=(gy>=0&&gy<=60)?gy:0;
}
void time::nhap()
{
	do{
		cin>>gio;
	}while(gio>24||gio<0);
	do{
		cin>>phut;
	}while(phut>60||phut<0);
	do{
		cin>>giay;
	}while(giay>60||giay<0);
	
}
void time::hienthi()
{
	cout<<setfill('0')<<setw(2)<<gio<<":"<<setw(2)<<phut<<":"<<setw(2)<<giay;
}
int main()
{
	time t(10,2,4);
//	t.nhap();
	t.hienthi();
}

