#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e5+10;


struct sol
{
    ll a;
    ll b;
};

bool sortbya(sol x, sol y)
{
    return x.a < y.a;
}
sol cnt[maxn];

int main() {
    freopen("AQUERY2.INP","r",stdin);
    freopen("AQUERY2.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll q; cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> cnt[i].a >> cnt[i].b;
    }
    ll k; cin >> k;
    sort(cnt,cnt+q,sortbya);
    for (int i = 0; i < q; i++)
    {
        if (k > cnt[i].b)
        {
            k = k -cnt[i].b;
        }
        else
        {
            cout << cnt[i].a;
            break;
        }
    }
    
    return 0;
}