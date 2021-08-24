#include<bits/stdc++.h>
using namespace std;

string left_x(string s){
	char x=s[0];
	s[0]=s[3];
	s[3]=s[7];
	s[7]=s[8];
	s[8]=s[5];	
	s[5]=s[1];
	s[1]=x;

	return s;
}

string right_x(string s){
	char x=s[1];	
	s[1]=s[4];	
	s[4]=s[8];
	s[8]=s[9];
    s[9]=s[6];
    s[6]=s[2];
    s[2]=x;		
	return s;
}

string left_ng(string s){
	char x=s[0];
	s[0]=s[1];
	s[1]=s[5];
	s[5]=s[8];
	s[8]=s[7];	
	s[7]=s[3];
	s[3]=x;		
	return s;
}

string right_ng(string s){
	char x=s[1];
	s[1]=s[2];
	s[2]=s[6];
	s[6]=s[9];
	s[9]=s[8];	
	s[8]=s[4];
	s[4]=x;
		
	return s;
}

map<string, int> input, bandau;
string test;

void check(){
    queue<string> q;
    input[test]=0;
    q.push(test);
    while(!q.empty()){
        string s=q.front(); q.pop();
        
        if(input[left_x(s)]==0){//chua quay tam ben trai s
            input[left_x(s)] = input[s]+1;
            q.push(left_x(s));
        }
        
        if(input[right_x(s)]==0){//chua quay tam ben phai s
            input[right_x(s)] = input[s]+1;
            q.push(right_x(s));
        }
        if(input[q.back()] >= 14)	return;
    }
}

int check2(){
    string str="1238004765";
    if(test==str) return 0;
	
	queue<string> p;
    bandau[str]=0;
    p.push(str);
    while(!p.empty()){
        string s=p.front(); p.pop();

        if(input[s]) return input[s]+bandau[s];

        if(bandau[left_ng(s)]==0){//chua quay tam ben trai s
            bandau[left_ng(s)] = bandau[s]+1;
            p.push(left_ng(s));
        }
        
        if(bandau[right_ng(s)]==0){//chua quay tam ben phai s
            bandau[right_ng(s)] = bandau[s]+1;
            p.push(right_ng(s));
        }
        
        if(bandau[p.back()] >= 15) return -1;
    }
    return -1;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		char a;
		test="";
		for(int i=1;i<=10;i++){
			cin>>a;
			test+= a;
		}
//		cout<<test<<endl;
		input.clear();
		bandau.clear();
//		cout<<left_x("1238004765");
		check();
		cout<<check2();
  		cout<<endl;
	}
	return 0;
}
