#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e9;
priority_queue<int,vector<int>, greater<int> > a ;


int main() {
    // freopen(".INP","r",stdin);
    // freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll n;
    cin >> n;
    ll x;
    ll org = 0;
    while (n--)
    {
        cin >> x;
        org += x;
        if (empty(a) == 1) {
            a.push(x);
            continue;
        }
        ll k = a.top()*2;
        a.pop();
        a.push(k);
        a.push(x);
    }
    ll sum = 0;
    auto qq = a;
    while(!qq.empty())
    {
        sum += qq.top();
        qq.pop();
    }
    
    cout << sum - org;
    return 0;
}