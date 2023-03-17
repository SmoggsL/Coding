#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e9;
set<int, greater<int> > a;

int main() {
    freopen("VALUES.INP","r",stdin);
    freopen("VALUES.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    while(n--)
    {
        int x;
        cin >> x;
        a.insert(x);
    }
    for (auto i : a)
    {
        cout << i << " ";
    }
    return 0;
}