#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e5+2;
int n;
int a[maxn],b[3];

int main() {
    //freopen(".INP","r",stdin);
    //freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    ll cnt = -1;
    for (int i = 1; i <= n; i++)
    {
        b[a[i]]++;
        if (b[0] == b[1])
        {
            ll temp = b[0] + b[1];
            cnt = max(cnt,temp);
            b[0] = b[1] = 0;
            i--;
        } 
    }
    cout << cnt;
    return 0;
}