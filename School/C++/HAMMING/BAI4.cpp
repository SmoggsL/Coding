#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e9;
ll t, n;
vector<ll> a;

ll binsearch(ll l, ll r, ll k)
{
    while (l <= r)
    {
        ll mid = (l+r)/2;
        if (k == a[mid]) return mid;
        if ( k < a[mid]) k = mid +1;
        else l = mid +1;
    }
    return -1;
}

ll popo(ll n,ll k)
{
    if (k == 0) return 1;
    ll temp = n;
    while (k > 1)
    {
        n = n*temp;
        k--;
    }
    return n;
}

int main() {
    freopen("BAI4.INP","r",stdin);
    freopen("BAI4.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    for (int x = 0; x <= 31; x++)
    {
        for (int y = 0; popo(2,x)*popo(3,y) <= maxn; y++)
        {
            for (int z = 0; popo(2,x)*popo(3,y)*popo(5,z) <= maxn; z++)
            {
                ll m = popo(2,x)*popo(3,y)*popo(5,z);
                a.push_back(m);
            }
        }
    }
    sort(a.begin(),a.end());
    
    cin >> t;
    while (t--)
    {
        int x; cin >> x;
        ll t = binary_search(a.begin(),a.end(),x);
        if (t == 0) cout << -1;
        else
        {
            ll ans = lower_bound(a.begin(),a.end(),x) - a.begin() + 1;
            cout << ans;
        }
        cout << endl;
    }
    return 0;
}