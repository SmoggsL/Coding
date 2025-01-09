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
    int t; cin >>t;
    while(t--)
    {
        ll n,a,b,c; cin >> n >> a >> b >> c;
        ll temp[4];
        temp[1] = a; temp[2] = b; temp[3] = c;
        ll sum = 0,cnt = 0,i = 1;
        while (sum < n)
        {
            cnt++;
            sum += temp[i];
            // cout << cnt << sp << sum << sp;
            i++;
            if (i > 3) i = 1;
        }
        cout << cnt << "\n";
    }
    return 0;
}