#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
//X khoi luong
//Y gia tri

struct item{
	double we,val;
};

bool cmp(item a, item b){
	return (a.val/a.we)>(b.val/b.we);
}

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,W;
		cin>>n>>W;
		item a[n];
		for(int i=0;i<n;i++){
			cin>>a[i].val>>a[i].we;
		}	
		sort(a,a+n,cmp);
		ll curW=0;
		double res=0;
		for(int i=0;i<n;i++){
			if(curW+a[i].we<=W){
				curW+=a[i].we;
				res+=a[i].val;
			}
			else{//curW+a[i].we>W
				res+=a[i].val*((W-curW)/a[i].we);
				break;
			}
		}
		cout<<fixed<<setprecision(2)<<res<<endl;
	}
	return 0;
}
