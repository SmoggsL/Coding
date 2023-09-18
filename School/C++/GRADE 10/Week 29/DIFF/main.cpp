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
        ll n,m; cin >> n >> m;
        ll rtol = 0, ltor = 0;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a,a+n);
        for (int i =0; i < m; i++) rtol += a[i];
        for (int i =n - m; i < n; i++) ltor+= a[i];
        cout << ltor - rtol << endl;
    }
    
    return 0;
}