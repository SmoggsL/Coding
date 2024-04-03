#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e9;


int main() {
    freopen("TINHTONG.INP","r",stdin);
    freopen("TINHTONG.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string s;
    getline(cin,s);
    // s = "sada21as4";
    int n = s.length();
    ll num = 0;
    ll sum = 0;
    for (int i = 0; i <= n; i++)
    {
        if(s[i] >= '0' && s[i] <= '9')
        {
            int t = s[i] - '0';
            num = num*10 + t;
        }
        else
        {
            sum += num;
            num = 0;
        }
    }
    cout << sum;
    return 0;
}