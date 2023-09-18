#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e9;
map<ll,ll> cnt;
struct height
{
    ll x;
    ll y;
    ll dif;
};
height a[10001];


int main() {
    // freopen(".INP","r",stdin);
    // freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll t; cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a[i].x >> a[i].y;
        a[i].dif = abs(a[i].x-a[i].y);
        cnt[a[i].dif]++;
    }
    pair <ll,ll> big;
    big.second = LLONG_MIN;
    for (auto i : cnt)
    {
        if (big.second < i.second)
        {
            big.second = i.second;
            big.first = i.first;
        }
    }
    cout << big.first << endl;
    for (int i = 0; i < t; i++)
    {
        if (a[i].dif == big.first)
        {
            cout << a[i].x<< sp << a[i].y << endl;
        }
    }
    
    return 0;
}