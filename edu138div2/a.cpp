/*
 * @Author: Xubo Luo 
 * @Date: 2022-10-23 13:20:14 
 * @Last Modified by: Xubo Luo
 * @Last Modified time: 2022-10-23 13:33:52
 */

# include <iostream>
# include <algorithm>

using namespace std;

int t, n, m;
typedef pair<int, int> IDX;


int main(){
    cin >> t;
    while(t--){
        cin >> n >> m;
        IDX index[10];
        for(int i=0;i<m;i++){
            cin >> index[i].first >> index[i].second;
        } 
        if(n==m)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}