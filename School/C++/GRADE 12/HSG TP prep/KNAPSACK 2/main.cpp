// Source: https://marisaoj.com/problem/141
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
#define el "\n" 
const ll mod = 1e9+7;
const ll maxn = 1e5+10;
int dp[150][maxn] = {0};

int main() {
    // freopen(".INP","r",stdin);
    // freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, s; cin >> n >> s;
    vector<pair<int,int>> a;
    for (int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        a.push_back(make_pair(x,y));
    }
    sort(a.begin(),a.end());
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= s; j++){
            if (a[i-1].first <= j){
                dp[i][j] = max(a[i-1].second + dp[i-1][j - a[i-1].first], dp[i-1][j]);
            }
            else dp[i][j] = dp[i-1][j];
        }
    }
    cout << dp[n][s];
    return 0;
}