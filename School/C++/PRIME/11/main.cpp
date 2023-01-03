#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e9;
ll n,t,p;

int main() {
    //freopen(".INP","r",stdin);
    //freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> t;
    while(t--)
    {
        cin >> n >> p;
        ll cnt = 0;
        while (n > 0)
        {
            cnt = cnt + n/p;
            n = n/p;
        }
        cout << cnt << endl;
    }
    return 0;
}