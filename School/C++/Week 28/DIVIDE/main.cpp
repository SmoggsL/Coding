#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e9;


int main() {
    // freopen(".INP","r",stdin);
    // freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int q;
    cin >> q;
    while(q--)
    {
        ll n;
        cin >> n;
        ll cnt = 0;
        bool flag = true;
        while(n>1)
        {
            if (n%5 == 0)
            {
                n = n*4/5;
                cnt++;
            }
            else if (n%3 == 0)
            {
                n = n*2/3;
                cnt++;
            }
            else if(n%2 == 0)
            {
                n = n/2;
                cnt++;
            }
            else
            {
                cout << -1;
                flag = false;
                break;
            }
        }
        if (flag) cout << cnt;
        cout << endl;
    }
        
    return 0;
}