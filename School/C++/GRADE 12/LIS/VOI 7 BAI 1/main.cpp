#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e8+1;

ll filt[maxn];
void ufilter()
{
    filt[1] = 1;
    for (int i = 2; i < maxn; i++){
        filt[i] = filt[i-1] +i;
    }
    return;
}

int main() {
    // freopen(".INP","r",stdin);
    // freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n; cin >> n;
    int a[n+5], dp[n+6];
    for (int i = 0; i < n; i++) cin >> a[i];
    
    dp[1] = a[0];
    int k = 1;
    for (int i = 1; i < n; i++)
    {
        if(a[i]>dp[k])
        {
            k++;
            dp[k] = a[i];
        }
        else
        {
            int id = lower_bound(dp+1,dp+k+1, a[i]) -dp;
            dp[id] = a[i];
        }
    }
    cout << k;
    return 0;
}