#include <bits/stdc++.h>

using namespace std;

#define fr1 for (int i = 0; i < n; i++)
#define fr2 for (int j = 0; j < n; j++)
#define pii pair<int, int>
#define tii tuple<int, int, int>
const int N = 1e6 + 10;
int n, m, x, y;
long long res, a[N];
string s;

void solve()
{
    scanf("%d", &n);
    res = 0;
    int pos = 0, neg = 0;
    long long minx = 1e18 + 1;
    memset(a, 0, sizeof a);
    fr1
    {
        scanf("%lld", &a[i]);
        minx = min(minx, abs(a[i]));
        if (a[i] > 0)
        {
            pos = 1;
            res += a[i];
        }
        else if (a[i] < 0)
        {
            neg = 1;
            res -= a[i];
        }
    }
    if (n == 1)
    {
        cout << a[0] << '\n';
        return;
    }
    if (pos + neg != 2)
    {
        cout << res - 2 * minx << '\n';
        return;
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