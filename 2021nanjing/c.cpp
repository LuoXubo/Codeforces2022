/*
 * @Author: Xubo Luo
 * @Date: 2022-10-26 23:45:50
 * @Last Modified by: Xubo Luo
 * @Last Modified time: 2022-10-26 23:47:04
 */
#include <bits/stdc++.h>

using namespace std;

#define fr1 for (int i = 0; i < n; i++)
#define fr2 for (int j = 0; j < n; j++)
#define pii pair<int, int>
#define tii tuple<int, int, int>

const int offset = 2e6;
int tcnt[4000010], num[4000010], a[4000010];

string s;

void solve()
{
    int n, k, ans = 0;
    scanf("%d%d", &n, &k);
    int x;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", a + i);
        num[a[i] + offset]++;
        ans = max(ans, num[a[i] + offset]);
    }
    if (k != 0)
    {
        for (int i = 1; i <= n; i++)
        {
            x = a[i];
            tcnt[x + offset]--;
            if (tcnt[x + offset] < 0)
            {
                tcnt[x + offset] = 0;
            }
            tcnt[x + offset + k]++;
            ans = max(ans, tcnt[x + offset + k] + num[x + offset + k]);
        }
    }
    printf("%d\n", ans);
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