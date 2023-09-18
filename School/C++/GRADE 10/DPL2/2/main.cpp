#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e6+5;
ll d,n,t;
ll a[maxn];

int main() {
    //freopen("main.INP","r",stdin);
    //freopen("main.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> t;
    while(t--)
    {
        cin >> d >> n;
        ll b,cnt = 0;
        ll temp = 0;
        memset(a,0,sizeof(a));
        a[0] = 1;
        for (ll i = 1; i <= n; i++)
        {
            cin >> b;
            temp = (temp%d + b%d)%d;
            //cout << temp << endl;
            a[temp]++;
        }
        for (ll i = 0; i < d; i++)
        {
            cnt = cnt + a[i]*(a[i] - 1)/2;
        }
        cout << cnt << "\n";
    }
    return 0;
}