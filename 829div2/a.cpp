#include <bits/stdc++.h>

using namespace std;

#define fr1 for (int i = 0; i < n; i++)
#define fr2 for (int j = 0; j < n; j++)

int n, m, x, y;
string s;

void solve()
{
    cin >> n;
    cin >> s;
    int cnt = 0;
    fr1
    {
        if (cnt < 0)
            cnt = 0;
        if (s[i] == 'Q')
            cnt++;
        else
            cnt--;
    }
    if (cnt > 0)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;
}

int main()
{
    //	freopen("source.in","r",stdin);
    //	freopen("source.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}