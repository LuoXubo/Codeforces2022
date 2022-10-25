#include <bits/stdc++.h>

using namespace std;

#define fr1 for (int i = 0; i < n; i++)
#define fr2 for (int j = 0; j < n; j++)
#define pii pair<int, int>
#define tii tuple<int, int, int>

int n, m, x, y;
char ch;
string s;

void solve()
{
    cin >> n >> ch;
    cin >> s;
    s += s;
    int res = 0;
    for (int i = 0, j = 0; i < n; i++)
    {
        if (s[i] == ch)
        {
            j = max(j, i);
            while (j < s.size() && s[j] != 'g')
                j++;
            res = max(res, j - i);
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
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}