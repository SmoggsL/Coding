#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e6;
int n, a[maxn];
int main() {
    freopen("DP_A2.INP","r",stdin);
    freopen("DP_A2.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];

    int Min = a[0];
    int ans = INT_MIN;
    for (int j = 1; j < n; j++)
    {
        ans = max(ans, a[j] - Min);
        Min = min(Min,a[j]);
    }
    cout << ans;
    return 0;
}