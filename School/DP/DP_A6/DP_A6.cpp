#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n;

int main() {
    freopen("DP_A6.INP","r",stdin);
    freopen("DP_A6.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    ll a[n+1];
    for(int i = 1; i <= n; i++) cin >> a[i];
    ll ans[n+1];
    ans[1] = max((long long)0,a[1]);
    ans[0] = 0;
    for (int i = 2; i <= n; i++)
    {
        ans[i] = max(ans[i-2] + a[i], ans[i-1]);
    }
    cout << ans[n];
    return 0;
}
