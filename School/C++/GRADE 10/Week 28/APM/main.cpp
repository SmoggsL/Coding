#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e9;
ll cnt = 0;
ll x;
ll m;
ll power(ll n, ll k)
{
    if (k == 0) return 1;
    if (k == 1) return n;
    ll temp = n;
    while(k > 1)
    {
        n = n*temp;
        k--;
    }
    return n;
}

int main() {
    // freopen(".INP","r",stdin);
    // freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll n;
    cin >> n;
    x = n;
    while (n>0)
    {
        while (n % 2 == 0)
        {
            cnt++;
            n = n / 2;
        }
        n--;
    }
    m = x- power(2,cnt);
    cout << cnt << sp << m;
    return 0;
}