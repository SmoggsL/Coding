#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e5+1;
int n;
ll dp02[maxn],dp1[maxn];

int main() {
    //freopen(".INP","r",stdin);
    //freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    dp02[1] = 2; dp1[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        dp02[i] += (dp02[i-1]%mod + dp1[i-1]%mod)*2%mod;
        dp1[i] += dp02[i-1]%mod;
    }
    cout << dp02[n] + dp1[n];
    return 0;
}