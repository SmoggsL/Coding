#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e9;
ll n,m;
vector<ll> a[10001];
bool visited[100001];

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
    while (m--)
    {
        ll x,y; cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    dfs(1);
    bool flag = false;
    for (int i = 1; i <= n; i++)
    {
        if (visited[i] == 0) 
        {
            cout << i << endl;
            flag = true;
        }
    }
    if (flag) cout << 0;
    return 0;
}