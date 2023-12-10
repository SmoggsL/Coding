#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e6+10;
int a[maxn];

int main() {
    freopen("main.INP","r",stdin);
    freopen("main.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll n; cin >> n;
    string s; 
    cin.ignore();
    getline(cin,s);
    // cout << s;
    for(int i = 0; i < n; i++)
    {
        if (s[i] == 'L')
        {
            a[i+1] = -1;
        }
        if (s[i] == 'R')
        {
            a[i+1] = 1;
        }
    }
    ll ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ll memR = 0;
        if (a[i] == 0) 
        {
            ans++;
        }
        else if (a[i] == -1)
        {
            
        }
    }
    cout << ans;

    return 0;
}