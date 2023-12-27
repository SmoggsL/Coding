#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e7;
int a[maxn];

int main() {
    // freopen(".INP","r",stdin);
    // freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll n; cin >> n;
    ll ans = LONG_LONG_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i < n-1; i++)
    {
        ll left = a[i] + a[i-1];
        ll right = a[i] + a[i+1];
        ll temp = max(left,right);
        ans = max(temp,ans);
    }
    cout << ans;
    return 0;
}