#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e6;
const ll maxn = 1e6+4;
int n,a[maxn];
map<ll,ll> m;
vector<pair<ll,ll>> ans;

bool sortvalue(const pair<ll,ll> &a,const pair<ll,ll> &b)
{
    return (a.second < b.second);
}

int main() {
    freopen("SDB.INP","r",stdin);
    freopen("SDB.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        ll k = a[i];
        if (m[k] == 0) m[k] = i;
        else m[k] = maxn;
    }
    ll counter=0;
    for (auto x: m)
    {
        if (x.second <= maxn - 4) {
            ans.emplace_back(x.first,x.second);
            counter++;
        }
    }
    sort(ans.begin(),ans.end(),sortvalue);
    cout << counter << "\n";
    for (auto x:ans)
    {
        cout << x.first << "\n";
    }
    return 0;
}