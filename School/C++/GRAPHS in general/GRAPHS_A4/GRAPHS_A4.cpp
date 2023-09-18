#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e9;
vector<ll> gr[1001];

int main() {
    // freopen(".INP","r",stdin);
    // freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll n; cin >> n;
    ll a[n+1][n+1];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) cin >> a[i][j];
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == 1) gr[i+1].push_back(j+1);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << i << ": ";
        for (auto j : gr[i])
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}