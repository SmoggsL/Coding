#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e9;
vector<pair<ll,ll>> gr;

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
            if (a[i][j] == 1)
            {
                if (i < j)
                {
                    gr.push_back({i+1,j+1});
                }
            }
        }
    }
    cout << gr.size() << endl;
    for (auto i : gr) cout << i.first << " " << i.second << endl;
    return 0;
}