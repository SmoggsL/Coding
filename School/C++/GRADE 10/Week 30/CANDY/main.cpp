#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e9;


int main() {
    // freopen(".INP","r",stdin);
    // freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll n,m; cin >> n >> m;
    vector<ll> a(n);
    vector<ll> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= m) b[i] = 1;
        else
        {
            if (a[i]%m == 0) b[i] = a[i]/m;
            else b[i] =a[i]/m +1;;
        }
    }
    pair <ll,ll> ans;
    ans.first = n;
    ans.second = b[n-1];
    for (int i = n - 1; i >= 0; i--)
    {
        if (ans.second < b[i])
        {
            ans.first = i+1;
            ans.second = b[i];
        }
    }
    cout << ans.first;
    return 0;
}