#include <bits/stdc++.h>

using namespace std;
#define ll long long
const ll maxn = 1e7;
ll a[maxn];
int main()
{
    freopen("BAI2.INP","r",stdin);
    freopen("BAI2.OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll n; cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];

    ll ans = LONG_LONG_MIN;
    for (int i = 2; i <= n-1; i++)
    {
        ll left = a[i] + a[i-1];
        ll right = a[i] + a[i+1];
        ans = max(ans, max(left,right));
    }
    cout << ans;
    return 0;
}
