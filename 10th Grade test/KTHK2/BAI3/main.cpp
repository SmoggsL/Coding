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
    ll t; cin >> t;
    while(t--)
    {
        ll n,k; cin >> n >> k;
        ll big = LLONG_MIN, small = LLONG_MAX;
        for (int i = 0; i < n; i++)
        {
            ll x; cin >> x;
            big = max(x,big);
            small = min(x,small);
        }
        if (abs(big - small) <= 2*k) cout << small + k;
        else cout << -1;
        cout << endl;
    }
    return 0;
}