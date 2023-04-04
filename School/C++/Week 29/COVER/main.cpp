#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e9;
struct line
{
    ll start;
    ll finish;
    ll length;
};
line a[1001];
ll x = LLONG_MAX, y = LLONG_MIN;

int main() {
    // freopen(".INP","r",stdin);
    // freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].start >> a[i].finish;
        x= min(x,a[i].start);
        y = max(y,a[i].finish);
    }
    ll sol;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (a[i].start == x && a[i].finish == y)
        {
            sol = i+1;
            flag = true;
            break;
        } 
    }
    
    if (flag == false) cout << -1;
    else cout << sol;

    return 0;
}