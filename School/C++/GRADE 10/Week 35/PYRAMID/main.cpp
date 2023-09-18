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
    ll n; cin >> n;
    ll cnt = 1, temp = n;
    ll minus = 1;
    for (int i = 2; i <= n; i++)
    {
        minus += i;
        temp -= minus;
        if (temp <= 0) break;
        cnt++;
    }
    cout << cnt;
    return 0;
}