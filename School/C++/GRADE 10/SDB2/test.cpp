#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+1;
const ll maxn = 1e6+1;


int main() {
    //freopen("SDB.INP","r",stdin);
    freopen("SDB.INP","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll n = rand()%maxn;
    cout << n << "\n";
    while(n--)
    {
        int temp = rand()%mod;
        int time = maxn - rand()%maxn;
        while (time--)
        {
            cout << rand()%mod << "\n";
            n--;
        }

    }
    return 0;
}