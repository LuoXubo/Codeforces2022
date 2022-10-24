/*
 * @Author: Xubo Luo 
 * @Date: 2022-10-23 13:39:00 
 * @Last Modified by: Xubo Luo
 * @Last Modified time: 2022-10-23 13:56:53
 */

# include <iostream>
# include <algorithm>

using namespace std;
typedef pair<int, int> MONS;
int t;
int n, maxn;
const int N = 2e5+10;
long long res;
int main(){
    cin >> t;
    while(t--){
        scanf("%d", &n);
        MONS m[N];
        res = 0;
        maxn = 0;
        for(int i=0;i<n;i++){
            scanf("%d", &m[i].first);
            res += m[i].first;
        }
        for(int i=0;i<n;i++){
            scanf("%d", &m[i].second);
            maxn = max(maxn, m[i].second);
            res += m[i].second;
        }
        cout << res - maxn << '\n';

    }
    return 0;
}