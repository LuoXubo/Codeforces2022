/*
 * @Author: Xubo Luo
 * @Date: 2022-11-04 12:16:55
 * @Last Modified by: Xubo Luo
 * @Last Modified time: 2022-11-04 17:21:24
 */
#include <bits/stdc++.h>

using namespace std;

#define fr1 for (int i = 0; i < n; i++)
#define fr2 for (int j = 0; j < n; j++)
#define pii pair<string, int>
#define tii tuple<int, int, int>

const int N = 7e5 + 10;

string s[10] = {"1000", "0100", "0010", "0001", "1100", "0110", "0011", "1110", "0111", "1111"};
int ans[N];
bool vis[N];
queue<pair<string, int>> q;

string spin(string ss, int x, int d)
{
    string str = ss;
    for (int i = 0; i < 4; i++)
    {
        if (s[x][i] == '1')
        {
            str[i] = (str[i] - '0' + d + 10) % 10 + '0';
        }
    }
    return str;
}

void dfs()
{
    while (!q.empty())
        q.pop();
    ans[0] = 0;
    vis[0] = 1;
    q.push({"0000", 0});

    while (!q.empty())
    {
        string ss = q.front().first;
        // cout << "**************    " << ss << '\n';
        int steps = q.front().second;
        q.pop();

        for (int i = 0; i < 10; i++)
        {
            string s1 = spin(ss, i, 1);
            string s2 = spin(ss, i, -1);
            int num1 = stoi(s1), num2 = stoi(s2);
            if (!vis[num1])
            {
                vis[num1] = 1;
                ans[num1] = steps + 1;
                q.push({s1, steps + 1});
            }
            if (!vis[num2])
            {
                vis[num2] = 1;
                ans[num2] = steps + 1;
                q.push({s2, steps + 1});
            }
        }
    }
}

void solve()
{
    dfs();
    int t;
    cin >> t;
    while (t--)
    {
        string st, target;
        cin >> st >> target;
        int g = 0;
        for (int i = 0; i < 4; i++)
        {
            g += ((target[i] - '0') - (st[i] - '0') + 10) % 10 * pow(10, 3 - i);
        }
        cout << ans[g] << '\n';
    }
}

int main()
{
    //	freopen("source.in","r",stdin);
    //	freopen("source.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}