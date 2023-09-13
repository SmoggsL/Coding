#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e9;
vector<int > odd ;
vector<int>even;
int main() {
    // freopen(".INP","r",stdin);
    // freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll n;
    cin >> n;
    while (n--)
    {
        ll x;
        cin >> x;
        if (x%2 == 0) even.push_back(x);
        else odd.push_back(x); 
    }
    reverse(odd.begin(),odd.end());
    for (auto i : odd) cout << i << " ";
    for (auto i : even) cout << i << " ";
    return 0;
}