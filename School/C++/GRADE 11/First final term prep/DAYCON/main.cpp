#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e5;
ll a;

int main() {
    // freopen(".INP","r",stdin);
    // freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll n; cin >> n;
    ll b = 0, count = 1, ans = 0;
    for (int i = 0; i <= n; i++)
    {
        if (i < n) cin >> a;
        if (i > 0)
        {
            if (a >= b && i < n) count++;
            else
            {
                ans = max(count,ans);
                count = 1;
            }
        }
        swap(a,b);
    }
    cout << ans;
    return 0;
}