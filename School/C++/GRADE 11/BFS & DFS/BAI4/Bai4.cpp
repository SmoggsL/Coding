#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e9;
ll n,m;
vector<ll> a[10005];
bool visited[10005];

void dfs(ll x)
{
    visited[x] = true;
    for (auto i : a[x])
    {
        if (!visited[i]) dfs(i);
    }
}

int main() {
    // freopen(".INP","r",stdin);
    // freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> m;
    while(m--)
    {
        ll x,y; cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    ll count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (visited[i] == 0)
        {
            count++;
            dfs(i);
        }
    }
    cout << count;
    return 0;
}