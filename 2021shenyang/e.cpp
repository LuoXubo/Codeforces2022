#include <bits/stdc++.h>

using namespace std;

#define fr1 for (int i = 0; i < n; i++)
#define fr2 for (int j = 0; j < n; j++)
#define pii pair<int, int>
#define tii tuple<int, int, int>

int n, m, x, y;
string s;

void solve()
{
    int res = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'e')
        {
            if (s.substr(i, 5) == "edgnb")
            {
                res++;
            }
        }
    }
    cout << res << '\n';
}

int main()
{
    //	freopen("source.in","r",stdin);
    //	freopen("source.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}