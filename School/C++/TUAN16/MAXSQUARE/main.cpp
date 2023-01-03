#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e3+5;
int t,n,a;


int main() {
    //freopen(".INP","r",stdin);
    //freopen("main.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> t;
    while(t--)
    {
        cin >> n;
        map<ll,ll> dp;
        for (int i = 1; i<= n; i++)
        {
            int x;
            cin >> x;
            for (int j = 1; j <= x; j++) dp[j]++;
        }
        ll ans = 0, temp = LLONG_MIN;
        for (auto i : dp)
        {
            if (i.second >= i.first)
            {
                ans = max(i.first,ans);
            } 
        }
        cout << ans << "\n";
        dp.clear();
    }
    return 0;
}