#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e9;


int main() {
    freopen("DEMSO.INP","r",stdin);
    freopen("DEMSO.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll l,r;
    cin >> l >> r;
    l--;
    ll a = 0,b = 0;
    if (l < 10) a = l;
    else 
    {
        string s = to_string(l);
        if (*s.begin() <= *s.rbegin()) a = 9 + l/10;
        else a = 8 + l/10;
    }
    if (r < 10) b = r;
    else
    {
        string s = to_string(r);
        if (*s.begin() <= *s.rbegin()) b = 9 + r/10;
        else b = 8 + r/10;
    }
    cout << b - a;
    return 0;
}