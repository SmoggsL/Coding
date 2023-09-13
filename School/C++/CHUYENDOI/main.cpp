#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e9;
queue<ll> a;

void print_queue(queue<ll> q)
{
    queue<ll> temp = q;
    while (!temp.empty()) {
        cout << temp.front()<<" ";
        temp.pop();
    }
    cout << '\n';
}

int main() {
    // freopen(".INP","r",stdin);
    // freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll n,k;
    cin >> n >> k;
    for (ll i = 0 ; i < n; i++)
    {
        ll x; cin >> x;
        a.push(x);
    }
    k = k %n;
    while (k--)
    {
        ll x = a.front();
        a.push(x);
        a.pop();
    }
    print_queue(a);
    return 0;
}