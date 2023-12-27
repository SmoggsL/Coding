#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e9;

ll biggestdigit(ll n)
{
    priority_queue<int> q;
    while (n > 0)
    {
        q.push(n%10);
        n /= 10;

    }
    return q.top();    
}

int main() {
    // freopen(".INP","r",stdin);
    // freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll n; cin >> n;
    int ans = 0;
    while (n > 0)
    {
        n -= biggestdigit(n);
        ans++;
    }
    cout << ans;
    return 0;
}