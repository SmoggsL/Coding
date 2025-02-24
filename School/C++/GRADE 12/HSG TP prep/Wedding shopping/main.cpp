// Source: https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=2445
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
#define dl "\n"
const ll mod = 1e9+7;
const ll maxn = 1e9;

const int maxgm = 30, maxm = 210;
int price[maxgm][maxgm];
bool dp[maxgm][maxm];

int main() {
    // freopen(".INP","r",stdin);
    // freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int m,c; cin >> m >> c;
        for (int i = 0; i < c; i++){
            cin >> price[i][0];
            for (int j = 1; j <= price[i][0]; j++){
                cin >> price[i][j];
            }
        }
        memset(dp,false,sizeof dp);
        for (int i = 0; i <= price[0][0]; i++){
            if (m - price[0][i] >= 0) dp[0][m-price[0][i]] = true;
        }
        int money;
        for (int i = 1; i < c; i++){
            for(money = 0; money < m; money++){
                if (dp[i-1][money]) {
                    for(int j = 1; j <= price[i][0]; j++){
                        if (money - price[i][j] >= 0){
                            dp[i][money - price[i][j]] = 1;
                        }
                    }
                }
            }
        }
        for (money = 0; money <= m && !dp[c-1][money]; money++);
        // for (int i = 0; i <= maxm; i++){
        //     if (dp[c-1][i] == 1) money = i;
        // }
        if (money >= m+1) cout << "no solution";
        else cout << m - money;
        cout << dl;
    }
    return 0;
}