#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9 + 7;
const int maxn = 1e6 + 5;
ll a[maxn+1];
int t;

int main() {
    freopen("DP_A1.INP","r",stdin);
    freopen("DP_A1.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    a[1] = a[2] = 1;
    for (int i = 3; i <= maxn; i++)
    {
        a[i] = (a[i-1]% mod  + a[i-2]%mod )%mod;
        //cout << a[i] << " ";
    }
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << a[n] << "\n";
    }
    return 0;
}