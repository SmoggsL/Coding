#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e9;
int n,k;
int a[1005][1005],b[1005][1005];

int main() {
    freopen("BONUS.INP","r",stdin);
    freopen("BONUS.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) cin >> a[i][j];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            b[i][j] = b[i-1][j] + b[i][j-1] - b[i-1][j-1] + a[i][j];
        }
    }
    ll Big = LLONG_MIN;
    for (int i = 0; i <= n-k; i++)
    {
        for (int j = 0; j <= n-k; j++)
        {
            int ik = i+k-1,jk = j+k - 1;
            ll WHY = b[ik][jk] -b[ik][j-1] - b[i-1][jk] + b[i-1][j-1];
            Big = max(Big, WHY);
        }
    }
    cout << Big;
    return 0;
}