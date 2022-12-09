#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 5*1e4+5;
ll d,n,t;
ll a[maxn];

int main() {
    //freopen(".INP","r",stdin);
    //freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> t;
    while(t--)
    {
        cin >> d >> n;
        ll temp,pain = 0,cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> temp;
            pain += temp;
            if (pain%d == 0)
            {
                cnt++;
                pain = 0;
                continue;
            } 
            if (pain > d)
            {
                pain = 0;
                continue;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}