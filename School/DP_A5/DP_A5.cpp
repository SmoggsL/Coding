#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n;

int main() {
    freopen("DP_A5.INP","r",stdin);
    freopen("DP_A5.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans = LLONG_MIN, max_rn = 0;
    for (int i = 0; i < n; i++)
    {
        max_rn += a[i];
        ans = max(ans,max_rn);
        if(max_rn < 0)
        {
            max_rn = 0;
        }
    }
    cout << ans;
    return 0;
}