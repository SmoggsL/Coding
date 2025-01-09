#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
#define dln "\n"
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
        int cnt = 0;
        bool flag = true;
        for (int i = 0; i < n; i++){
            int a; cin >> a;
            if (a==0 && i > 0 && i < n) cnt += 1;
            if (a != 0) flag = false;
        }
        if (flag == true) cout << 0;
        else if (cnt <= 0) cout << 1;
        else cout << 2;

        cout << dln;
    }
    return 0;
}