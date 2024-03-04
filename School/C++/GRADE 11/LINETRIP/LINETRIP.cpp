#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e5;
int a[maxn];
int f(int n){
    return (n<0)?-1*n:n;
}
int main() {
    freopen("LINETRIP.INP","r",stdin);
    freopen("LINETRIP.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    ll ans = 0;
    for (int i = 0; i < n; i++) cin >> a[i];
    a[n] = 0;
    sort(a,a+n+1);
    ans = f(a[0])*2 + f(a[n])*2;
    cout << ans;
    return 0;
}
