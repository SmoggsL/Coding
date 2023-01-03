#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e9;
int t;
ll n;
map<ll,ll> a;
vector<ll> why;

void pain(ll n)
{
    ll temp = sqrt(n);
    ll i = 2;
    ll ans = n;
    while (n > 1 && i <= temp)
    {
        while (n % i == 0){
            ans = i;
            n /= i;
        } 
        i++;
    }
    cout << ans << "\n";
}

int main() {
    freopen("main.INP","r",stdin);
    freopen("main.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> t;
    while(t--)
    {
        cin >> n;
        pain(n);
    }
    return 0;
}