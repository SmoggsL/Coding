#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e7;
ll a[maxn],b[maxn],c[maxn];

int main() {
    // freopen(".INP","r",stdin);
    // freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >>t;
    while(t--)
    {
        int n; cin >> n;
        
        ll big = LLONG_MIN, small = LLONG_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            big = max(big,a[i]);
            small = min(small,a[i]);
        }
        if (n == 1){
            cout << 0 << "\n";
            continue;
        }
        for (int i = 0; i <n;i++)
        {
            b[i] = small;
            c[i] = big;
        }
        b[0] = big;
        ll sum = 0;
        for (int i = 0; i < n;i ++)
        {
            sum = sum + c[i]-b[i];
        }
        cout << sum << "\n";
    }
    return 0;
}