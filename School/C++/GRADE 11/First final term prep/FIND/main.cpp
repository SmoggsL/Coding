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
    vector<pair<ll,ll>> a;
    while (n--)
    {
        ll x,y; cin >> x >> y;
        a.emplace_back(x,y);
    }
    sort(a.begin(),a.end());
    pair<ll,ll> temp = {a[0].first,a[0].second};
    ll ans = 0;
    for (auto &i : a)
    {
        if (i.first <= temp.second && i.second > temp.second) temp.second = i.second;
        else if (i.first > temp.second && i.second > temp.second) temp = i;
        ans = max(ans, temp.second - temp.first);
    }
    cout << ans;
    return 0;
}