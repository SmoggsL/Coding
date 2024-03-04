#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e6;
ll am[maxn], an[maxn], countm[maxn], countn[maxn];

int main() {
    freopen("ABLINIS.INP","r",stdin);
    freopen("ABLINIS.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll m; cin >> m;
    for (int i = 0; i < m; i++)
    {
        ll t; cin >> t;
        if (i > 0)
        {
            if (t >= am[i-1])
            {
                am[i] = t;
                countm[t]++;
            } 
        }
        else {
            am[i] = t;
            countm[t]++;
        }
    }
    ll n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        ll t; cin >> t;
        if (i > 0)
        {
            if (t >= an[i-1])
            {
                an[i] = t;
                countn[t]++;
            } 
        }
        else {
            an[i] = t;
            countn[t]++;
        }
    }
    cout << min(countm[0],countn[0]) + min(countn[1],countm[1]);
    return 0;
}