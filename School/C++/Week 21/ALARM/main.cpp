#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e9;
int h,m;

int main() {
    //freopen(".INP","r",stdin);
    //freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> h >> m;
    if (m >= 45) cout << h << " " << m-45;
    else
    {
        int x,y;
        if (h == 0) x = 23;
        else x = h -1;
        y = 60 + m -45;
        cout << x << " " << y;
    }
    return 0;
}