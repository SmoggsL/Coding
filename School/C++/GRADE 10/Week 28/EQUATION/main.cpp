#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 50000000;

ll count(ll x)
{
    ll sum = 0;
    while (x > 0)
    {
        sum = sum + x%10;
        x /= 10;
    }
    return sum;
}

int main() {
    // freopen(".INP","r",stdin);
    // freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll n;
    cin >> n;
    if (n <= 9) cout << -1;
    else
    {
        bool flag = false;
        for (ll i = 10; i <= maxn; i++)
        {
            if (count(i)*i == n)
            {
                cout << i;
                flag = true;
                break;
            }
        }
        if (flag == false) cout << -1;
    }
    return 0;
}