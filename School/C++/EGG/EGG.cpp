#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e9;
ll n,m;
struct farmer
{
    ll price;
    ll amt;
};
struct farmer a[100005];

bool comparinPrice(farmer x, farmer y)
{
    return x.price < y.price;
}

int main() {
    freopen("EGG.INP","r",stdin);
    freopen("EGG.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> a[i].price >> a[i].amt;
    }
    sort(a+1,a+m+1,comparinPrice);

    ll ans = 0;
    for (int i = 1 ; i <= m; i++)
    {
        if (n <= 0) break;
        if (a[i].amt <= n)
        {
            ans += a[i].amt*a[i].price;
            n -= a[i].amt;
        }
        else
        {
            ans += n*a[i].price;
            n -= a[i].amt;
        }
    }
    cout << ans;

    return 0;
}