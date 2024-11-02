#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e6;
// ll profit[maxn];

int main() {
    // freopen(".INP","r",stdin);
    // freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--)
    {
        int n,k; cin >> n >> k;
        ll profit[k+3];
        memset(profit,0,sizeof(profit));
        for (int i = 0; i < k; i++)
        {
            int b, c; cin >> b >> c;
            // profit[i].first() = b*c;
            profit[b] += c;
            // profit.push_back(make_pair(b*c,c));
        }
        sort(profit,profit+k+1,greater<>());
        // for (int i = 0; i <= k; i++){
        //     cout << i << sp << profit[i] << "\n";
        // } 
        // cout << "\n";
        ll ans = 0;
        for (int i = 0; i <= k; i++) 
        {
            ans += profit[i];
            n--;
            if (n<=0) break;
        }
        cout << ans << "\n";
    }
    return 0;
}