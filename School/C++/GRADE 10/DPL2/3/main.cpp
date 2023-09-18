#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e5+5;
int n,k;
ll a[maxn],sum[maxn];

int main() {
    //freopen(".INP","r",stdin);
    //freopen("main.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> k;
    ll pos[k+1];
    memset(pos,-1,sizeof(pos));
    for (int i = 1 ; i<= n; i++) cin >> a[i];
    sum[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        sum[i] = (sum[i-1]%k + a[i]%k)%k;
        if (pos[sum[i]] == -1) pos[sum[i]] = i;
    }
    ll ans = 0;
    pos[0] = 0;
    for (int i = 1 ; i <= n; i++)
    {
        if (pos[sum[i]] != -1)
        {
            ll temp = i - pos[sum[i]];
            ans = max(ans, temp);
        }
    }
    cout << ans;
    return 0;
}