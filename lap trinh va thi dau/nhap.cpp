#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        string so;
        cin >> so;
        char max[1];
        for (int i = 0; i < so.length() - 1; i++)
        {
            max[0] = so[i];
            int vt = i;
            for (int j = i + 1; j < so.length(); j++)
            {
                if (max[0] <= so[j])
                {
                    max[0] = so[j];
                    vt = j;
                }
            }
            if (max[0]>so[i] && k>0)
            {
                k--;
                swap(so[i], so[vt]);
            }
            if (k == 0)
                break;
        }
        cout << so << endl;
    }
    return 0;
}
