#include <bits/stdc++.h>

using namespace std;

#define fr1 for (int i = 0; i < n; i++)
#define fr2 for (int j = 0; j < n; j++)
#define pii pair<int, int>
#define tii tuple<int, int, int>

int n, m, x, y;
int a[200005];
string s;

void solve()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int cnt = 0;
    int sum = 0;
    int idx = 0;
    int last = 0;
    vector<pii> v;
    if (n & 1)
    {
        puts("-1");
        return;
    }
    for (int i = 2; i <= n; i += 2)
    {
        if (a[i] == a[i - 1])
        {
            v.push_back({i - 1, i});
        }
        else
        {
            v.push_back({i - 1, i - 1});
            v.push_back({i, i});
        }
    }
    int len = v.size();
    cout << len << endl;
    for (int i = 0; i < len; i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
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