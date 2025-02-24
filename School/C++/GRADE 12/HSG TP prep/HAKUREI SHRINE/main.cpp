// source: https://marisaoj.com/problem/140
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
#define el "\n" 
const ll mod = 1e9+7;
const ll maxn = 1e6;


int main() {
    // freopen(".INP","r",stdin);
    // freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    ll dp[maxn] = {0};
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    for(int i = 3; i <= n; i++){
        dp[i] = dp[i-3] + dp[i-2] + dp[i-1];
        dp[i] %= mod;
    }
    cout << dp[n];
    return 0;
}