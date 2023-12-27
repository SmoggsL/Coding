#include <bits/stdc++.h>

using namespace std;
#define ll long long
const ll maxn = 1e5;
ll a[maxn];
int main()
{
    freopen("BAI1.INP","r",stdin);
    freopen("BAI1.OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll n; cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];

    ll ans = LONG_LONG_MIN;
    ll ind = 1;
    for (int i = 2; i <= n+1; i++)
    {
        if (i <= n)
        {
            if (a[i] < a[i-1])
            {
            ans = max(ans, i - ind);
            ind = i;
            }
            continue;
        }
        ans = max(ans,i - ind);
    }
    cout << ans;
    return 0;
}
