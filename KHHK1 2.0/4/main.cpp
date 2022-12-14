#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e9;
int n;
ll a[5001];
priority_queue<ll> b;

int main() {
    //freopen(".INP","r",stdin);
    //freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a[i] = x;
        b.push(x);
    }
    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cnt = cnt + abs(a[i] - b.top());
        b.pop();
    }
    cout << cnt;
    return 0;
}