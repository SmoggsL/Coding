#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e5;


int main() {
    // freopen(".INP","r",stdin);
    // freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int a[9], dp[9];
    int x, n = 0;
    while(cin >> x) {
        a[n] = x;
        n++;
    }
    dp[1] = a[0];
    int k = 1;
    for (int i = 1; i < n; i++)
    {
        if(a[i]>dp[k])
        {
            k++;
            dp[k] = a[i];
        }
        else
        {
            int id = upper_bound(dp+1,dp+k+1, a[i]) -dp;
            dp[id] = a[i];
        }
    }
    cout << k << "\n" << "- \n";
    for (int i = 1; i <= k; i++) cout << dp[i] << "\n";
    return 0;
}