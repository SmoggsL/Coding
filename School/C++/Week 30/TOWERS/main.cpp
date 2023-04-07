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
    ll n; cin >> n;
    vector<ll> a(n+1);
    a[1] = 1;
    ll sum = 1;
    for (int i = 2; i <= n; i++)
    {
        a[i] = a[i-1] + i;
        sum += a[i];
    }
    cout << sum;
    return 0;
}