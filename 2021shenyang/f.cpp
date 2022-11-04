/*
 * @Author: Xubo Luo
 * @Date: 2022-11-04 11:56:43
 * @Last Modified by: Xubo Luo
 * @Last Modified time: 2022-11-04 12:14:57
 */
#include <bits/stdc++.h>

using namespace std;

#define fr1 for (int i = 0; i < n; i++)
#define fr2 for (int j = 0; j < n; j++)
#define pii pair<int, int>
#define tii tuple<int, int, int>

int n, m, x, y;
string s;
int vis[26];
string cvt(string ss)
{
    string res = "";
    for (int i = 0; i < ss.size(); i++)
    {
        memset(vis, 0, sizeof vis);
        int cnt = 0, idx = i;
        for (int j = i; j < ss.size(); j++)
        {
            if (ss[j] == ss[i])
                idx = j;
        }
        for (int j = idx + 1; j < ss.size(); j++)
        {
            vis[int(ss[j] - 'a')]++;
        }
        for (int j = 0; j < 26; j++)
        {
            if (vis[j] != 0)
            {
                cnt++;
            }
        }
        if (idx == ss.size() - 1)
            res += 'a';
        else
            res += (char('a' + cnt));
    }
    return res;
}

void solve()
{
    cin >> n;
    cin >> s;
    string ss[1005];
    for (int i = 0; i < n; i++)
    {
        ss[i] = s.substr(0, i + 1);
        ss[i] = cvt(ss[i]);
        // cout << ss[i] << '\n';
    }
    sort(ss, ss + n);
    cout << ss[n - 1] << '\n';
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