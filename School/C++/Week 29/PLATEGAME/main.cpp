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
    int a,b,r;
    cin >> a >> b >> r;
    ll res = a*b/(r*r*3.14);
    if (res%2 == 0) cout << "Second";
    else cout << "First";
    return 0;
}