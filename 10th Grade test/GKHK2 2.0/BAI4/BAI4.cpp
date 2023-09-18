#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e9;

int main()
{
    freopen("BAI4.INP","r",stdin);
    freopen("BAI4.OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    ll cntpos = 0, cntneg= 0;
    for (int i = 0 ; i < n; i++)
    {
        ll x; cin >> x;
        if (x > 0) cntpos++;
        if (x < 0) cntneg++;
        if (x == 0)
        {
            cout << -1;
            return 0;
        }
    }
    cout << min(cntpos,cntneg);

    return 0;
}
