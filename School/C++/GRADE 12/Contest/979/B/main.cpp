#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e9;


int main() {
    // freopen(".INP","r",stdin);
    // freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s = "1";
        for (int i = 1; i <=n-1; i++)
        { 
            s += "0";
        }
        cout << s << "\n";
    }
    return 0;
}