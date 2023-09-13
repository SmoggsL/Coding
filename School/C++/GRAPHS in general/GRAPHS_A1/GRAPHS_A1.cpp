#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e9;
vector <ll> dslk[1000005];

int main() {
    // freopen(".INP","r",stdin);
    // freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll n,m;
    cin >> n >> m;
    while (m--){
        int x, y; cin >> x >> y;
        dslk[x].push_back(y);
        dslk[y].push_back(x);
    }
    for (int i = 1; i <= n; i++){
        cout << i << ": ";
        for (auto j : dslk[i]){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}