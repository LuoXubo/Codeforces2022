#include <bits/stdc++.h>

using namespace std;

#define fr1 for (int i = 0; i < n; i++)
#define fr2 for (int j = 0; j < n; j++)
#define pii pair<int, int>
#define tii tuple<int, int, int>

int n, m, x, y;
string s;
const int N = 1e5 + 10;
int a[N], t[N];
Edge edges[N];
typedef pair<int, int> Edge;
void solve()
{
    scanf("%d", &n);
    fr1
    {
        scanf("%d", &a[i]);
    }
    fr1
    {
        cin >> t[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        cin >> edges[i].first >> edges[i].second;
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