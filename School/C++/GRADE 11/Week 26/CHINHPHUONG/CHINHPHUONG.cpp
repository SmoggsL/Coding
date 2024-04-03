#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e9;

ll sum(int x)
{
    int temp = 0;
    while (x>0)
    {
        temp += x%10;
        x/=10;
    }
    return(temp);
}

int main() {
    freopen("CHINHPHUONG.INP","r",stdin);
    freopen("CHINHPHUONG.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int total = sum(n);
    int x = sqrt(total);
    if (x*x == total) cout << "YES";
    else cout << "NO";
    return 0;
}