#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const ll mod = 1e9+7;
const ll maxn = 1e5;
vector<ll> a;

int main() {
    // freopen(".INP","r",stdin);
    // freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    for (ll i = 1; i < maxn; i++)
    {
        ll temp = i*(i+1)/2;
        a.push_back(temp);

    }
    int t;
    cin >> t;
    while(t--)
    {
        ll x;
        cin >> x;
        bool flag = false;
        for (auto i : a)
        {
            if(x-i<=0) break;
            ll temp = x - i;
            ld j=(-1+sqrt(1+8*temp))/2;
            if(j==trunc(j))
            {
                cout << "YES";
                flag=true;
                break;
            }
        }
        if (flag == false) cout << "NO";
        cout << endl;
    }
    return 0;
}