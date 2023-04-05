#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e9;

int main() {
    // freopen(".INP","r",stdin);
    // freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll n,k; cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0 ;i < n; i++) cin >> a[i];
    ll res = 0;
    for (auto i : a)
    {
        if (i% k ==0 ) res += i/k;
        else res += i/k +1;
    }
    cout << res/2 + res%2;
    return 0;
}