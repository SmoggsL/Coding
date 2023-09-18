#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e9;
ll n, k;
queue<int> a;

int main() {
    // freopen(".INP","r",stdin);
    // freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> k;
    ll m = n;
    while (n--)
    {
        int x;
        cin >> x;
        a.push(x);
    }
    k = k%m;
    // cout << k << "\n";
    while (k > 0)
    {
        int x = a.front();
        a.push(x);
        a.pop();
        k--;
    }
    while(!a.empty())
    {
        cout << a.front() << " ";
        a.pop();
    }
    return 0;   
}