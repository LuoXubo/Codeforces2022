/*
 * @Author: Xubo Luo
 * @Date: 2022-10-26 23:09:29
 * @Last Modified by: Xubo Luo
 * @Last Modified time: 2022-10-26 23:11:27
 */
#include <bits/stdc++.h>

using namespace std;

#define fr1 for (int i = 0; i < n; i++)
#define fr2 for (int j = 0; j < n; j++)
#define pii pair<int, int>
#define tii tuple<int, int, int>

int n, m, x, y;
int a, b;
string s;

void solve()
{
    cin >> n >> a >> b;
    if (a - 1 <= n - a)
    {
        for (int i = 2; i <= n; i++)
        {
            cout << "U";
        }
        for (int i = 1; i < a; i++)
        {
            cout << "D";
        }
    }
    else
    {
        for (int i = 1; i < n; i++)
        {
            cout << "D";
        }
        for (int i = n; i > a; i--)
        {
            cout << "U";
        }
    }
    if (b - 1 <= n - b)
    {
        for (int i = 2; i <= n; i++)
        {
            cout << "L";
        }
        for (int i = 1; i < b; i++)
        {
            cout << "R";
        }
    }
    else
    {
        for (int i = 1; i < n; i++)
        {
            cout << "R";
        }
        for (int i = n; i > b; i--)
        {
            cout << "L";
        }
    }
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
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}