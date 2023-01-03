#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll maxn = 1e9;
int n, a[maxn],amax[maxn],amin[maxn];
int ans = INT_MIN;
int main() {
    freopen("DP_A3.INP","r",stdin);
    freopen("DP_A3.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    amax[0] = a[0];
    amin[n-1] = a[n-1];
    for (int i = 1; i < n; i++)
    {
        amax[i] = max(amax[i-1],a[i]);
    }
    for (int i = n-2 ; i >= 0; i--)
    {
        amin[i] = min(amin[i+1],a[i]);
    }
    for (int i = 1; i < n-1; i++)
    {
        ans = max(ans,amax[i-1] + a[i] - amin[i+1]);
    }
    return 0;
}