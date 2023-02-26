#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e5+10;
ll n,a;

int main() {
    // freopen(".INP","r",stdin);
    // freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> a;
    if (a%2 != 0)
    {
        cout << a/2 +1;
    }
    else
    {
        ll k = 1;
        for (int i = 1; i <= n/2; i++)
        {
            ll temp = n - k +1;
            if (temp == a)
            {
                cout << i;
                break;
            }
            k = k + 2;
        }
    }
    
    return 0;
}