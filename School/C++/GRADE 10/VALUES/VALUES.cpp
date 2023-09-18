#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e9;
int n;
ll a[10005];

int main() {
    freopen("VALUES.INP","r",stdin);
    freopen("VALUES.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    ll temp = a[n];
    bool flag = false;
    for (int i = n-1; i >= 1; i--)
    {
        if (temp != a[i])
        {
            cout << temp << " ";
            temp = a[i];
            flag = true;
        }
    }
    cout << temp;
    return 0;
}