#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e6+5;
int n;
string s;
ll b[maxn],g[maxn];
map<int,int> dp;

int main() {
    freopen("main.INP","r",stdin);
    freopen("main.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    cin >> s;
    ll Count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a') 
        {
            b[i] = b[i-1] + 1;
            g[i]=g[i-1];
        }
        else 
        {
            g[i] = g[i-1]+1;
            b[i]= b[i-1];
        }
        dp[b[i] - g[i]]++;
    }
    dp[0]++;
    for (auto i : dp)
    {
        if (i.second == 1) continue;
        int temp = i.second;
        int val = (temp-1)*temp/2;
        Count += val;
    }
    cout << Count;
    return 0;
}