#include <bits/stdc++.h>

using namespace std;

#define fr1 for (int i = 0; i < n; i++)
#define fr2 for (int j = 0; j < n; j++)
#define pii pair<int, int>
#define tii tuple<int, int, int>

int n, m, q;
string s;
const int N = 1e5 + 10;
long long sum, a[N], tp[N], x[N];

void solve()
{
    memset(a, 0, sizeof a);
    memset(tp, 0, sizeof tp);
    memset(x, 0, sizeof x);
    sum = 0;
    int odd = 0, even = 0;

    cin >> n >> q;
    fr1
    {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 1)
            odd++;
        else
            even++;
        sum += a[i];
    }

    for (int i = 0; i < q; i++)
    {
        cin >> tp[i] >> x[i];
        if (tp[i] == 0)
        {
            sum += even * x[i];
            if (x[i] % 2 == 1)
            {
                odd += even;
                even = 0;
            }
        }
        else
        {
            sum += odd * x[i];
            if (x[i] % 2 == 1)
            {
                even += odd;
                odd = 0;
            }
        }
        cout << sum << '\n';
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