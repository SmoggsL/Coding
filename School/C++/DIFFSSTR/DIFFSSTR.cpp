#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e9;
map<char,ll> chacha;
string s;

int main() {
    freopen("DIFFSSTR.INP","r",stdin);
    freopen("DIFFSSTR.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> s;
    ll ans = LLONG_MIN;
    ll cnt = 0;
    for  (int i = 0; i < s.length(); i++)
    {
        char temp = s[i];
        chacha[temp]++;
        if (chacha[temp] >= 2)
        {
            ans = max(cnt,ans);
            cnt = 0;
            chacha.clear();
            i--;
        }
        else cnt++;
    }
    cout << ans;
    
    return 0;
}