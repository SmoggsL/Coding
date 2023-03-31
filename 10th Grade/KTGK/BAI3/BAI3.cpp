#include <bits/stdc++.h>

using namespace std;
#define ll long long
const ll maxn = 1e6+7;
int n;
ll a[maxn],b[maxn];

int main()
{
    freopen("BAI3.INP","r",stdin);
    freopen("BAI3.OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    b[0] = a[0];
    for(int i = 0; i < n; i++)
    {
        b[i] = b[i-1] +a[i];
    }
    ll k = 2;
    ll ans = LLONG_MIN;
    while(2*k <n)
    {
        for (int i = 0; i <= n -2*k; i++)
        {
            ll temp = 0;
            for (int j = i; j < i+2*k; j++)
                {
                    temp += a[j];
                }
            ans = max(ans,temp);
        }
        k++;
    }
    cout << ans;
    return 0;
}
