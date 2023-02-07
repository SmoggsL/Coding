#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e9;
int n;
vector<ll> a;

int main() {
    freopen("main.INP","r",stdin);
    freopen("main.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());

    ll temp = a[n-1];
    a.insert(a.begin(),temp);
    a.pop_back();
    cout << a[0] + a[1] << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    
    return 0;
}