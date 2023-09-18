#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e9;
int a,b,c,d;

int main() {
    // freopen(".INP","r",stdin);
    // freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> a >> b >> c >> d;
    if (a != c && b != d && abs(a-c) != abs(b-d))
    {
        cout << "-1";
    }
    else
    {
        if (a != c && b != d) cout << a << " " << d << " " << c << " " << b;
        else if (a == c)
        {
            ll l = abs(d-b);
            if(b > d) cout << a + l << " " << b<< " " << c + l << " " << d;
            else cout << a - l << " " << b<< " " << c - l << " " << d;
        }
        else
        {
            ll l = abs(a-c);
            if (a > c) cout << a << " " << b + l << " " << c<< " " << d + l;
            else cout << a << " " << b - l << " " << c << " " << d-l;
        }
    }
    return 0;
}