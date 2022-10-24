#include <bits/stdc++.h>

using namespace std;

#define fr1 for (int i = 0; i < n; i++)
#define fr2 for (int j = 0; j < n; j++)

int n, m, x, y;
string s;

void solve()
{
    cin >> n;
    int a[n];
    int idx1 = n % 2 == 0 ? n / 2 : n / 2 + 1;
    int idx2 = n;
    fr1
    {
        if (i % 2)
        {
            a[i] = idx2;
            idx2--;
        }
        else
        {
            a[i] = idx1;
            idx1--;
        }
    }
    fr1
            cout
        << a[i] << ' ';

    cout << '\n';
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