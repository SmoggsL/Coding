#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e5+5;
ll t,n,a[maxn],b[maxn],c[maxn];

int main() {
    freopen("main.INP","r",stdin);
    freopen("main.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> t;
    while(t--)
    {
        cin >> n;
        for (int i = 1 ; i <= n; i++) cin >> a[i];
        bool flag = true;
        for (int i = 1 ; i <= n; i++)
        {
            cin >> b[i];
        }
        for (int i = 1; i <= n; i++)
        {
            c[i] = abs(b[i] - a[i]);
        }

        if (flag) cout << "TRUE" << "\n";
    }
    return 0;
}