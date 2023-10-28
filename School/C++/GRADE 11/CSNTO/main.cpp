#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e9;

bool prime(ll x)
{
    if (x == 2 || x == 3) return 1;
    if (x < 5 || x%2 == 0 || x%3 == 0) return 0;
    for (int i = 5; i <= sqrt(x); i = i + 6)
        if (x % i == 0 || x % (i + 2) == 0)
            return 0;
    return 1;
}

int main() {
    // freopen(".INP","r",stdin);
    // freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll k,n,m;
    cin >> k >> n >> m;
    ll ans = 0;
    for (int i = n; i <= m; i++)
    {
        string s = to_string(i);
        if (s.size() != k) 
        {
            // cout << s << endl;
            continue;
        }
        if (prime(i)) ans++;
    }
    cout << ans;
    return 0;
}