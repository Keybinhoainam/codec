#include<bits/stdc++.h>
using namespace std;
class point{
	private:
		float x,y;
	public:
		void nhap(){
			cout<<"x,y= ";cin>>x>>y;
		}
		float getx(){
			return x;
		}
		float gety()
		{
			return y;
		}
		float kc(point);
};
float point::kc(point t)
{
	float t1=x-t.getx();
	float t2=y-t.gety();
	return sqrt(t1*t1+t2*t2);
}
class Shape{
	private:
		string name;
	public:
		virtual void nhap()=0;
		virtual void hienthi()=0;
		virtual void C()=0;
		virtual void S()=0;
};
class Triangle:public Shape{
	private:
		point p1,p2,p3;
	public:
		virtual void nhap();
		virtual void hienthi();
		virtual float C();
		virtual float S();
};
void Triangle::nhap(){
	p1.nhap();
	p2.nhap();
	p3.nhap();
	
}
float Triangle::C()
{
	
}
int main()
{
	Shape *s;
}

