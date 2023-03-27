#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e9;
map<int,ll> cnt;

int main() {
    // freopen(".INP","r",stdin);
    // freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll n,a;
    cin >> n >> a;
    for (int i = a; i <= a + n - 1; i++)
    {
        ll k = i;
        while (k > 0)
        {
            int temp = k%10;
            cnt[temp]++;
            k /= 10;
        }
    }
    for (auto i : cnt)
    {
        cout << i.second << " ";
    }
    return 0;
}