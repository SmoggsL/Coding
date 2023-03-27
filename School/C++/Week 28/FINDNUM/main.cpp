#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e9;

bool primecheck(ll n)
{
    if (n <= 1) return 0;
    if (n < 4) return 1;
    if (n%2 == 0 || n%3 == 0) return 0;
    for (int i = 5; i*i <= n; i+=6)
    {
        if (n%i == 0|| n%(i+2) == 0) return 0;
    }
    return 1;
}

int main() {
    // freopen(".INP","r",stdin);
    // freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        ll a,b;
        cin >> a >> b;
        ll c = 1;
        ll sum = a + b + c;
        while (primecheck(sum) == 0)
        {
            c++;
            sum = a + b + c;
        }
        cout << c << "\n";
    }
    return 0;
}