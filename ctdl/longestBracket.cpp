#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    cin >> s;
    int dem = 0;
    stack<int> myStack;
    myStack.push(-1);
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '(')
            myStack.push(i);
        if(s[i]==')')
        {
            myStack.pop();
            if(myStack.size() > 0)
            {
                dem = max(dem, i-myStack.top());
            }
            if(myStack.size() == 0)
                myStack.push(i);
        }
//        cout<<myStack.top()<<" ";
    }
    cout << dem;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
        cout << endl;
    }
    return 0;
}
