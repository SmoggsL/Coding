#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e9;
ll a,b,x,y,z;

int main() {
    //freopen(".INP","r",stdin);
    //freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> a >> b >> x >> y >> z;
    a = a-y;
    b = b-y;
    ll temp1 = 0,temp2 = 0;
    if (2*y > a) temp1 = 2*z - a;
    if (3*z > b) ll temp2 = 3*z - b;
    cout << temp1 + temp2;
    return 0;
}