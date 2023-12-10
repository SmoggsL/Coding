#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e9;
int main()
{
    //freopen(".INP","r",stdin);
    //freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    string s;
    cin>>n>>s;
    ll len=s.size();
    ll i=0;
    ll tempans=0;
    ll ans=0;
    ll tempans2=1;
    while(i < len)
    {
        if (s[i]=='.') tempans++;
        if (s[i]=='L') tempans=0;
        if (s[i]=='R')
        {
            ans+=tempans;
            tempans=0;
            tempans2=0;
            i++;
            while(s[i]=='.'&&i<s.size())
                {
                    tempans2++;
                    i++;
                }
            if (s[i]=='L') ans=ans+tempans2%2;
            i--;
        }
        i++;
    }
    if (tempans>0) ans+=tempans;
    cout<<ans;
    
    return 0;
}