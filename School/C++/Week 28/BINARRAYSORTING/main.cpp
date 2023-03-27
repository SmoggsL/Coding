#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e9;
multiset<ll> a;

int main() {
    // freopen(".INP","r",stdin);
    // freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        for (int i = 0 ; i < n; i++)
        {
            int x;
            cin >> x;
            a.insert(x);
        }
        for (auto i : a)
        {
            cout << i << " ";
        }
        cout << endl;
        a.clear();
    }
    return 0;
}