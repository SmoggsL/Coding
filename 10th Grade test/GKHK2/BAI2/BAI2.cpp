#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e9;


int main() {
    freopen("BAI2.INP","r",stdin);
    freopen("BAI2.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll n,m;
    cin >> n >> m;
    ll sl = (n*(n+1))/2;
    if (m < sl) cout << -1;
    else
    {
        ll x = m - sl;
        if(x%n == 0)
        {
            cout << 1 + x/n << sp << n + x/n;
        }
        else
        {
            if (x > n) cout << 1 + x/n << sp << n + x/n + 1;
            else cout << 1 << sp << n + x/n +1;
        }
    }
    return 0;
}