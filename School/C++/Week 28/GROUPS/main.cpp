#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e6;
ll a[maxn];

int main() {
    freopen("main.INP","r",stdin);
    freopen("main.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        memset(a,0,n);
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a,a+n);
        bool flag = false;
        for (int i = 1; i < n; i++)
        {
            if (abs(a[i] - a[i-1]) == 1)
            {
                cout << 2;
                flag = true;
                break;
            }
        }
        if (flag == false) cout << 1;
        cout << "\n";
    }
    return 0;
}