#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e9;
set <ll> a;

int main() {
    // freopen("DIVISORS.INP","r",stdin);
    // freopen("DIVISORS.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll n; cin >> n;
    for (ll i = 1; i <= sqrt(n); i++)
    {
        if (n%i == 0) a.insert(i);
    }
    for (auto i : a)
    {
        a.insert(n/i);
    }
    for (auto i : a)
    {
        cout << i << endl;
    }
    return 0;
}