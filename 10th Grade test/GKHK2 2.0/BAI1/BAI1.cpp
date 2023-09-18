#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e9;

bool checkprim(ll n)
{
    if (n < 2) return 0;
    if (n < 4) return 1;
    if (n%2 == 0 || n%3 == 0) return 0;
    for (int i = 5; i*i <= n; i+=6)
    {
        if (n%i == 0 || n%(i+2) == 0) return 0;
    }
    return 1;
}


int main()
{
    freopen("BAI1.INP","r",stdin);
    freopen("BAI1.OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--)
    {
        ll a,b; cin >> a >> b;
        ll c = 1;
        ll sum = a + b + c;
        while(checkprim(sum) == 0)
        {
            c++;
            sum = a + b + c;
        }
        cout << c << endl;
    }

    return 0;
}
