#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e9;
int n,m;
int a[105];
vector<int> w;
vector<int> v;
ll dp[105][105];


int main() {
    freopen("main.INP","r",stdin);
    freopen("main.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> w[i] >> v[i] >> a[i];
    }
    int newn = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; i < a[i]; j++)
        {
            w.push_back(w[i]);
            v.push_back(v[i]);
            newn++;
        }
    }
    n = newn;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (j >= w[i]){
                dp[i][j] = max(dp[i-1][j],v[i] + dp[i-1][j -w[i]]);
            }
            else dp[i][j] = dp[i-1][j];
            //else dp[i][j] = dp[i-1][j];
            //cout << dp[i][j] << " ";
        }
        //cout <<endl;
    }
    //cout << endl;
    cout << dp[n][m] << "\n";
    
    return 0;
}
