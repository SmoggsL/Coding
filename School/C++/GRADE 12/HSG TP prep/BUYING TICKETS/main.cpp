// source: https://marisaoj.com/problem/572
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
#define el "\n" 
const ll mod = 1e9+7;
const ll maxn = 1e5+5;
int t[maxn], r[maxn], dp[maxn];

int main() {
    // freopen(".INP","r",stdin);
    // freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    for (int i = 1; i <= n; i++) cin >> t[i];
    for (int i = 2; i <= n; i++) cin >> r[i];
    dp[1]=t[1];
    for (int i = 2; i <= n;i++){
        dp[i] = min(dp[i-1] + t[i],dp[i-2]+r[i]);
    }
    cout << dp[n];
    return 0;
}