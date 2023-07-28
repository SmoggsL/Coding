#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e9;
map<ll,ll> cnt;
int main()
{
    freopen("BAI3.INP","r",stdin);
    freopen("BAI3.OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll n; cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(),a.end(),greater< ll >());
    for (int i = 0; i < n; i++)
    {
        ll temp = a[i] - i;
        if (temp < 0) temp = 0;
        cnt[temp]++;
    }
    ll sum = 0;
    for (auto i : cnt)
    {
        sum += i.first*i.second;
    }
    cout << sum;
    return 0;
}
