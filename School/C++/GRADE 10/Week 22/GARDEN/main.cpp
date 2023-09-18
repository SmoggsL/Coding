#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e9;
int t;
int check[205];
bool checkcrop(int n)
{
    for (int i = 1; i <= n;i++)
    {
        if (check[i] == 0) return false;
    }
    return true;
}

int main() {
    freopen("main.INP","r",stdin);
    freopen("main.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> t;
    while(t--)
    {
        memset(check,0,205);
        ll n, k;
        cin >> n >> k;
        for (int i = 1; i <= k; i++)
        {
            int x;
            cin >> x;
            check[x] = 2;
        }
        ll cnt = 1;
        while (checkcrop(n) == false)
        {
            for(int i = 1; i <= n; i++)
            {
                if (check[i] == 2)
                {
                    ll pre = abs(i-cnt),af = i+cnt;
                    if (check[pre] != 2) check[pre] = 1;
                    if (check[af] != 2)  check[af] = 1;
                    cnt++;
                }
            }
            
        }
        cout << cnt << endl;
    }
    return 0;
}