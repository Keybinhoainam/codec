#include<bits/stdc++.h>
using namespace std;
int n;
int a[100][100],a1[100];
pair<pair<int,int>,int>t[100];
bool cmp(pair<pair<int,int>,int>i,pair<pair<int,int>,int>j)
{
	if(i.second==j.second)return i.first.first<j.first.first;
	return i.second<j.second;
}
void dfs(int u)
{
	for(int i=1;i<=n;i++)
	{
		if(a[u][i]==1&&a1[i]==0)
		{
			a1[i]=1;
			a[u][i]=0;
			a[i][u]=0;
			dfs(i);
			a[u][i]=1;
			a[i][u]=1;
		}
	}
}
int main()
{
	int dem=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
        	cin>>a[i][j];
        	if(j>i&&a[i][j]>0)
        	{
        		t[dem].second=a[i][j];
        		t[dem].first.first=i;
        		t[dem].first.second=j;
        		dem++;
			}
		}
    }
    vector<pair<pair<int,int>,int>>vt;
    for(int i=0;i<dem;i++)
    {
    	vt.push_back(t[i]);
	}
	sort(vt.begin(),vt.end(),cmp);
	cout<<"<sắp xếp các cạnh đồ thị theo thứ tự tăng dần của trọng số>:\n";
	// int x=(dem%2==0)?dem/2:(dem/2)+1;
	for(int i=0;i<dem/2;i++)
    {
    	cout<<vt[i].first.first<<"-"<<vt[i].first.second<<" 	 "<<vt[i].second;
    	cout<<endl;
	}
	memset(a,0,sizeof(a));
	int socanh=0,tong=0;
	pair<int,int>kq[100];
	for(int i=0;i<dem&&socanh<n-1;i++)
	{
		memset(a1,0,sizeof(a1));
		cout<<"xét cạnh "<<vt[i].first.first<<"-"<<vt[i].first.second<<": ";
		a[vt[i].first.first][vt[i].first.second]=1;
		a[vt[i].first.second][vt[i].first.first]=1;
		dfs(vt[i].first.first);
		if(a1[vt[i].first.first]==0)
		{
			cout<<"không tạo chu trình";
//			cout<<endl<<"    cap nhat d[h] = "<<
			kq[socanh].first=vt[i].first.first;
			kq[socanh].second=vt[i].first.second;
			tong+=vt[i].second;
			cout<<endl<<"\tĐưa "<<vt[i].first.first<<"-"<<vt[i].first.second<<" vào cây khung";
			cout<<endl<<"\tcật nhật d[h] = "<<tong;
			socanh++;
			
		}
		else
		{
			cout<<"tạo chu trình => không xét";
			a[vt[i].first.first][vt[i].first.second]=0;
			a[vt[i].first.second][vt[i].first.first]=0;
		}
		cout<<endl;
		
	}
	if(socanh==n-1)
	{
		cout<<"Kết thúc vòng lặp\n\tta được kết quả là: d[h]= "<<tong;
	}
	
}