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
    ll n; cin >> n;
    vector<pair<int, int>> a;
    ll minx = LONG_LONG_MAX; 
    ll miny = LONG_LONG_MAX; 
    ll maxx = LONG_LONG_MIN; 
    ll maxy = LONG_LONG_MIN; 
    while (n--)
    {
        ll x,y; cin >> x >> y;
        minx = min(minx,x);
        miny = min(miny,y);
        maxx = max(maxx,x);
        maxy = max(maxy,y);
    }
    ll lengthx = maxx - minx;
    ll lengthy = maxy- miny;
    ll ans = max(lengthx,lengthy);
    cout << ans*ans;
    return 0;
}