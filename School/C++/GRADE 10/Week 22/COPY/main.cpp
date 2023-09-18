#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e9;


int main() {
    // freopen(".INP","r",stdin);
    // freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll x, y;
    cin >> x >> y;
    if ( y <= 0 || (x > 0 && y == 1)) {
        cout << "No";
        return 0;
    }

    y = y-1;
     if (x >= y)
    {
        ll temp = x - y;
        if (temp%2 == 0) cout << "Yes";
        else cout << "No";
    }
    else cout << "No";
    return 0;
    
}