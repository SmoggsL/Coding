#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e9;
ll a[10001],b[10001];

int main() {
    // freopen(".INP","r",stdin);
    // freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> a[1] >> a[2] >> a[3];
    cin >> b[1] >> b[2] >> b[3];
    ll n; cin >> n;
    ll sum1 = a[1] + a[2] + a[3];
    ll sum2 = b[1] + b[2] + b[3];
    ll ans = 0;
    if (sum1 % 5 == 0) ans += sum1/5;
    else ans += sum1/5 + 1;
    if (sum2 %10 == 0) ans += sum2/10;
    else ans += sum2/10 +1;
    if (ans <= n) cout << "YES";
    else cout << "NO";
    return 0;
}