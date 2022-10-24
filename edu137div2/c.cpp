#include <bits/stdc++.h>

using namespace std;

#define fr1 for (int i = 0; i < n; i++)
#define fr2 for (int j = 0; j < n; j++)
#define pii pair<int, int>
#define tii tuple<int, int, int>

typedef long long ll;

const int N = 2e5 + 10;
int n, m, x, y;
string s;

void solve()
{
    cin >> n;
    vector<ll> a(n);
    ll dp[n][2];
    memset(dp, 0, sizeof(dp));

    string s;
    cin >> s;

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (s[0] - '0' == 1)
    {
        dp[0][1] = a[0];
    }

    for (ll i = 1; i < n; i++)
    {
        if (s[i] - '0' == 0)
        {
            dp[i][0] = max(dp[i - 1][0], dp[i - 1][1]);
        }
        else
        {
            dp[i][1] = max(dp[i - 1][0], dp[i - 1][1]) + a[i];
            dp[i][0] = dp[i - 1][0] + a[i - 1];
        }
    }

    cout << max(dp[n - 1][0], dp[n - 1][1]) << "\n";
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