#include <bits/stdc++.h>

using namespace std;
#define ll long long
const ll maxn = 1e9;

int main()
{
    freopen("BAI4.INP","r",stdin);
    freopen("BAI4.OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll n; cin >> n;
    string s; cin >> s;
    ll ans = 0;
    ll ind = 0;
    ll fall = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '.' && fall == 0) ans++;
        else
        {
            if (s[i] == 'L')
            {
                if (fall == 0)
                {
                    ans = ans - i + ind ;
                    if (ans < 0) ans = 0;
                    ind = i;
                }
                if (fall == 1)
                {
                    ans += (i - ind+1)%2;
                    fall = 0;
                    ind = i;
                }
            }
            else if (s[i] == 'R')
            {
                fall = 1;
                ind = i;
            }
        }
        //if (i == n-1 && fall == 1) ans = ans - i + ind;
    }
    cout << ans;
    return 0;
}
