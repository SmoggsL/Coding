#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e9;

map<ll,ll> a;
int main() {
    //freopen(".INP","r",stdin);
    //freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[x]++;
    }
    ll big = LLONG_MIN;
    for (auto i : a)
    {
        big = max(big,i.second);
    }
    for (auto i: a)
    {
        if (i.second == big) cout << i.first << " ";
    }

    return 0;
}