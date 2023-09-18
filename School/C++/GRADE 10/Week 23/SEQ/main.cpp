#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e9;
int a,b;

int main() {
    // freopen(".INP","r",stdin);
    // freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> a>> b;
    int temp = abs(a-b);
    if (a == 0 && b == 0) cout << "NO";
    else if (temp <= 1) cout << "YES";
    else cout << "NO";
    return 0;
}