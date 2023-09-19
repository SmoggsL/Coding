#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e9;
bool visited[1005];
vector<ll> a[1005];
ll n,m,k;

void dfs(ll x)
{
    visited[x] = true;
    for (auto i : a[x])
    {
        if(i == k)
        {
            cout << "Yes";
            exit(0);
        }
        if(!visited[i]) dfs(i);
    }
    
}

int main() {
    // freopen(".INP","r",stdin);
    // freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> m >> k;
    
    while(m--)
    {
        ll x,y; cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    dfs(1);
    cout << "No";
    return 0;
}