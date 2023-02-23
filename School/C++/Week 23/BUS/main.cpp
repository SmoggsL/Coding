#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e5;
int n,m,a,b;

int main() {
    freopen("main.INP","r",stdin);
    freopen("main.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> m >> a >> b;
    ll money = n*a;
    for (int i = 1; i <= maxn; i++)
    {
        if (m*i >= n)
        {
            ll temp = b*i;
            money = min(money,temp);
            break;
        }
    }
    cout << money;
    return 0;
}