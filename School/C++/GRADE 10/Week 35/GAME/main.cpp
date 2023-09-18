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
    
    int t; cin >> t;
    while(t--)
    {
        ll x,y,n;
        cin >> x >> y >> n;
        if (n%2 != 0)
        {
            x*=2;
        }
        ll big = max(x,y);
        ll small = min(x,y);
        ll res = big/small;
        cout << res << endl;
    }

    return 0;
}