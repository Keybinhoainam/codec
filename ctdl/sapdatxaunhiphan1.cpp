#include<bits/stdc++.h>
using namespace std;
const int MAX_CHAR = 26; 
  
struct Key 
{ 
    int freq; 
    char ch; 
    bool operator<(const Key &k) const
    { 
        return freq < k.freq; 
    } 
}; 
void kt(string str) 
{ 
    int n = str.length(); 
    int count[MAX_CHAR] = {0}; 
    for (int i = 0 ; i < n ; i++) 
        count[str[i]-'a']++;  
    priority_queue< Key > pq; 
    for (char c = 'a' ; c <= 'z' ; c++) 
        if (count[c-'a']) 
            pq.push( Key { count[c-'a'], c} ); 
//    while(!pq.empty())
//    {
//    	cout<<pq.top().ch<<" "<<pq.top().freq<<endl;
//    	pq.pop();
//	}
    str = "" ;
    Key prev {-1, '#'} ; 
    while (!pq.empty()) 
    {  
        Key k = pq.top(); 
        pq.pop(); 
        str = str + k.ch; 
        if (prev.freq > 0) 
            pq.push(prev); 
        (k.freq)--; 
        prev = k; 
    } 
    if (n != str.length()) 
        cout << -1 << endl; 
  
    else 
        cout << 1 << endl; 
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string s;
		cin>>s;
		long long n=s.length();
		kt(s);
	}
}

