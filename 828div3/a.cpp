#include <bits/stdc++.h>

using namespace std;

#define fr1 for (int i = 0; i < n; i++)
#define fr2 for (int j = 0; j < n; j++)
#define pii pair<int, int>
#define tii tuple<int, int, int>

int n, m, x, y;
string s;
int a[55];
void solve()
{
    cin >> n;
    fr1
    {
        cin >> a[i];
    }
    cin >> s;
    map<int, char> ref;
    fr1
    {
        ref[a[i]] = '1';
    }
    fr1
    {
        if (ref[a[i]] == '1')
        {
            ref[a[i]] = s[i];
        }
        else
        {
            if (ref[a[i]] != s[i])
            {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
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