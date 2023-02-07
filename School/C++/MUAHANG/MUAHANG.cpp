#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e8;
int n;
vector<ll> a;


int main() {
    freopen("MUAHANG.INP","r",stdin);
    freopen("MUAHANG.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    ll total = 0;
    for (int i = 0; i < n; i++)
    {
        total += a[i];
        for (int j = i+1; j < n; j++)
        {
            ll sum = a[i]+a[j];
            a.push_back(sum);
        }
    }
    a.push_back(total);
    sort(a.begin(),a.end());
    cout << a.size() << endl;
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}