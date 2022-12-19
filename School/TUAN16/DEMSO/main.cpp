#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e9;
ll l,r;

bool check(string s)
{
    int end = s.length()-1;
    if (s[0] == s[end]) return 1;
    else return 0;
}

int main() {
    //freopen(".INP","r",stdin);
    //freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> l >> r;
    ll cnt = 0;
    for (ll i = l; i <= r; i++)
    {
        string s = to_string(i);
        if (check(s)) cnt++;
    }
    cout << cnt;
    return 0;
}