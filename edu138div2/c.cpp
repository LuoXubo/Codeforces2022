/*
 * @Author: Xubo Luo
 * @Date: 2022-10-23 13:57:40
 * @Last Modified by: Xubo Luo
 * @Last Modified time: 2022-10-24 00:40:37
 */

#include <iostream>
#include <algorithm>
using namespace std;
int t, n, a[105];

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        if (a[n - 1] >= n && a[n - 1] != 1)
        {
            cout << "0\n";
            continue;
        }
    }
    return 0;
}