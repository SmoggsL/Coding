#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 2*1e5 +5;
int n;
ll a[maxn];
map<ll,ll> b;

int main() {
    //freopen(".INP","r",stdin);
    //freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[a[i]]++;
    } 
    sort(a,a+n);
    cout << a[n-1] - a[0] << " ";
    ll small = a[0], big = a[n-1];
    if (small == big)
    {
        ll k = b[small];
        cout << k*(k-1)/2;
    }
    else cout << b[small]*b[big];
    return 0;
}