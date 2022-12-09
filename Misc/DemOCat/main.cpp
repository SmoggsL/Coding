#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e9;
ll n,m;

ll gcd(ll a, ll b)
{
    if (b == 0) return a;
    else return (gcd(b,a%b));
}

int main() {
    //freopen(".INP","r",stdin);
    //freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> m >> n;
    ll ans = m + n - gcd(m,n);
    cout << ans;
    return 0;
}