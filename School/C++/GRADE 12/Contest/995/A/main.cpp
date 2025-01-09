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
    int t; cin >>t;
    while(t--)
    {
        int n; cin >> n;
        int a[n+1],b[n+1];
        b[n+1] = 0;
        for (int i = 1; i <= n; i++) cin >> a[i];
        for (int i = 1; i <= n; i++) cin >> b[i];
        int ans = 0;
        for (int i = n; i > 0; i--)
        {
            // if (ans + a[i] - b[i+1] > ans)
            ans = max(ans + a[i] - b[i+1],ans);
            // cout << ans << sp;
        }
        cout << ans << "\n";
    }
    return 0;
}