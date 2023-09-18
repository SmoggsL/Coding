#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e9;
int main()
{
    freopen("BAI2.INP","r",stdin);
    freopen("BAI2.OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll n; cin >> n;
    vector<ll> a(n);
    ll big = LLONG_MIN;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n -2; i++)
    {
        ll temp = a[i+2] - a[i];
        big = max(temp,big);
    }
    cout << big;

    return 0;
}
