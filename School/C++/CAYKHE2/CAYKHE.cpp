#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e9;
int n,m;
int v[105],w[105];
ll dp[105][105];
bool pain[100000];
ll WHY = 0;

int main() {
    freopen("CAYKHE.INP","r",stdin);
    freopen("CAYKHE.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i] >> w[i];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (j >= w[i])
            {
                dp[i][j] = max(dp[i-1][j], v[i] + dp[i-1][j-w[i]]);
            }
            else dp[i][j] = dp[i-1][j];
            //cout << dp[i][j] << " ";
        }
        //cout <<endl;
    }
    //cout << endl;
    cout << dp[n][m] << "\n";
    ll wt = m;
    for (int i = n; i >= 1; i--)
    {
        ll bruh = dp[i-1][wt-w[i]] + v[i];
        if (dp[i][wt] == bruh)
        {
            pain[i] = true;
            wt = wt - w[i];
            WHY++;
        }
    }
    cout << WHY << " ";
    for (int i = 1; i <= n; i++)
    {
        if (pain[i]) cout << i << " ";
    }
    return 0;
}
