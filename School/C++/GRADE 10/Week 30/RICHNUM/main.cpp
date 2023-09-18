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
    vector<ll> a;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n%i == 0)
        {
            a.push_back(i);
            a.push_back(n/i);
        }
    }
    ll sum = 1;
    for (auto i : a)
    {
        sum += i;
    }
    if (sum > n) cout << 1;
    else cout << 0;
    return 0;
}