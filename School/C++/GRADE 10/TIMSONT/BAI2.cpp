#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e9;
ll m,n,k;

bool primecheck(ll n)
{
    if (n < 2) return 0;
    if (n < 4) return 1;
    if (n%2 == 0 || n%3 == 0) return 0;
    for (int i = 5; i*i <= n; i+= 6)
    {
        if (n%i == 0 || n%(i+2) == 0) return 0;
    }
    return 1;
}

ll sumnum(ll n)
{
    ll sum = 0;
    while (n > 0)
    {
        ll temp = n%10;
        sum += temp;
        n = n/10;
    }
    return sum;
}

int main() {
    freopen("BAI2.INP","r",stdin);
    freopen("BAI2.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> m >> n >> k;
    ll cnt = 0;
    if (n < k) cout << "0";
    else
    {
        for (int i = m; i<= n; i++)
        {
            if (primecheck(i))
            {
                ll temp = sumnum(i);
                if (temp%k == 0) cnt++;
            }
        }
        cout << cnt;
    }
    return 0;
}