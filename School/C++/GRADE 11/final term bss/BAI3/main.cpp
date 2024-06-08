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
    ll n,a,b; cin >> n >> a >> b;
    ll k = max(n/a,n/b);
    ll i = 0;
    ll ans = -1;
    bool flag = true;
    while (k>0)
    {
        if (k*a == n || k*b == n || n%a == 0 || n%b == 0)
        {
            flag = false;
            break;
        }
       ll suma = k*a + i*b;
       ll sumb = k*b + i*a;

    }
    return 0;
}