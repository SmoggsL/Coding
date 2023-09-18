#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e5;
int n,m,a,b;

int main() {
    // freopen("main.INP","r",stdin);
    // freopen("main.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> m >> a >> b;
    ll ans;
    if (m == 0)
    {
        cout << n*a;
    }
    else if (n < m)
    {
        ans = min (n*a,b);
        cout << ans;
    }
    else
    {
        ll temp = n/m;
        ll ticket1 = n*a, ticket2 = temp*b;
        ans = min(ticket1,ticket2);
        ll mod = n%m;
        if (mod > 0)
        {
            ticket1 = mod*a;
            ticket2 = b;
            ll temp2 = min(ticket1,ticket2);
            ans += temp2;
        }
        cout << ans;

    }
    return 0;
}