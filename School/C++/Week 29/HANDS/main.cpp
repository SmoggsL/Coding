#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e9;

ll factorial(ll n)
{
    ll res = n;
    for (int i = n -1; i >= 2; i--) res = res*i;
    return res;
}

int main() {
    // freopen(".INP","r",stdin);
    // freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll n;
    cin >> n;
    cout << (n*(n-1))/2;
    return 0;
}