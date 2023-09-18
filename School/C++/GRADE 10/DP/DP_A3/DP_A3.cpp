#include <bits/stdc++.h>
using namespace std;
#define ll long long
long n;
vector<long long> a;

int main() {
    freopen("DP_A3.INP","r",stdin);
    freopen("DP_A3.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int z;
        cin >> z;
        a.push_back(z);
    }
    ll amax[n];
    ll amin[n];
    amax[0] = a[0];
    amin[n-1] = a[n-1];
    for (int i = 1; i < n; i++)
    {
        amax[i] = max(amax[i-1],a[i]);
    }
    for (int i = n-2; i >= 0; i--)
    {
        amin[i] = min(amin[i+1],a[i]);
    }

    ll ans = LLONG_MIN;
    for (int j = 1; j < n-1; j++)
    {
        ans = max(ans, amax[j-1] + a[j] - amin[j+1] );
    }
    cout << ans;
    return 0;
}