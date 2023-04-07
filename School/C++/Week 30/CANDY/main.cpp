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
    ll n,m; cin >> n >> m;
    vector< pair <ll,ll> > a(n);
    for (int i = 1; i <= n; i++)
    {
        a[i].first = i;
        cin >> a[i].second;
    }
    while(a.size() > 0)
    {
        
        for (int i = 1; i <= n; i++)
        {
            if (a[i].second <= m) a.erase(a.begin() + i);
            else
            {
                a[i].second = a[i].second - m;
            }
        }
        n = a.size();
    }
    return 0;
}