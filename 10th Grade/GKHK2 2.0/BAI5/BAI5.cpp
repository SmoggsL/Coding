#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e9;

char alph[30] ={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
map<char,ll> alphabet,cnt;
int main()
{
    freopen("BAI5.INP","r",stdin);
    freopen("BAI5.OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll n; cin >> n;
    char s[10001]; for (int i = 0; i < n; i++) cin >> s[i];
    for(int i = 0; i < n;i++)
    {
        if (s[i] == '?') continue;
        cnt[s[i]]++;
        ll temp = cnt[s[i]];
    }
    
    for (int i = 0; i < 26; i++)
    {
        ll x; cin >> x;
        alphabet.emplace(alph[i],x);
    }
    for (auto i : cnt)
    {
        if (i.second > alphabet[i.first])
        {
            cout << -1;
            return 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '?')
        {
            for (auto j : alphabet)
            {
                if(j.second > 0 )
                {
                    char temp = j.first;
                    alphabet[temp]--;
                    s[i] = j.first;
                    break;
                }
            }
        }
    }
    cout << s;
    return 0;
}
