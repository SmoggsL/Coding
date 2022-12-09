#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e5+5;
int n,q,l,r;
int a[maxn],b[maxn];

int main() {
    //freopen(".INP","r",stdin);
    //freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >>  q;
    for (int i = 1; i<= n; i++) cin >> a[i];
    b[1] = a[1];
    for (int i = 2; i <= n; i++) b[i] = b[i-1] + a[i];
    while(q--)
    {
        cin >> l >> r;
        cout << b[r] - b[l-1] << endl;
    }
    return 0;
}