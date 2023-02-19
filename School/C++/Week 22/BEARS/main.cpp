#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e9;


int main() {
    //freopen(".INP","r",stdin);
    //freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int a,b;
    cin >> a >> b;
    ll cnt = 0;
    while(a <= b)
    {
        a *= 3;
        b *= 2;
        cnt++;
    }
    cout << cnt;
    return 0;
}