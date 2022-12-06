#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e5+1;


int main() {
    freopen("FREQUENCY.INP","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int T = rand()%maxn;
    cout << T << endl;
    while(T--)
    {
        cout << rand()%101 << " ";
    }
    return 0;
}