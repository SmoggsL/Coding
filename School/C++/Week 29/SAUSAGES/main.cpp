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

    if (m % n == 0) cout << (m / n - 1) * n;
	else if (n % m == 0) cout << 0;
    else
    {
        ll mul = lcm(n, m), n1 = lcm(n,m) / m, m1 = lcm(n,m) / n, s = 0, sol = 0;
        for (ll i = 1; i <= m; i++) 
        {
            while (s < n1) s += m1;
            if (s == n1) s = 0;
            else 
            {
                sol++;
                s -= n1;
            }
        }
        cout << sol;
    }
	
    return 0;
}