#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e9;
string s;

ll power(ll n,ll k)
{
    ll v = n;
    if (k == 0) return 1;
    while(k > 1)
    {
        n = n*v;
        k--;
    }
    return n;
}


int main() {
    freopen("BAI1.INP","r",stdin);
    freopen("BAI1.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> s;
    ll a = s.length()-1;
    ll sum = 0;
    for (auto i : s)
    {
        if (i == '1')
        {
            sum = sum + power(2,a);
        }
        a--;
    }
    cout << sum;
    return 0;
}