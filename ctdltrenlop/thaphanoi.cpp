#include<bits/stdc++.h>
using namespace std;
void chuyen(int n, char a, char c){
	printf("Chuyen dia thu %d tu coc %c sang coc %c \n",n,a,c);
	return;
	}
void thaphanoi(int n, char a, char c, char b){
	if (n==1) chuyen(1, a, c);
	else{
		thaphanoi(n-1, a, b, c);
		chuyen(n, a, c);
		thaphanoi(n-1, b, c,a);
}
return;
}
int main()
{
	int n;
	cin>>n;
//	char a,b,c;
	thaphanoi(n,'a','c','b');
}

