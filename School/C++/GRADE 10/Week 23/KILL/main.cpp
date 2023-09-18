#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e9;
ll a,b,c;

int main() {
    //freopen(".INP","r",stdin);
    //freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> a >> b >> c;
    ll temp;
    for (int i = 0; i <= c/a; i++)
    {
        temp = c - a*i;
        if (temp%b == 0)
        {
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
    return 0;
}