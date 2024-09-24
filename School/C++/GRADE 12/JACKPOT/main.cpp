#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e9;


int main() {
    // freopen(".INP","r",stdin);
    // freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    while (n != 0)
    {
        int max_sofar = INT_MIN, max_ending = 0;
        int k = n;
        while (k--){
            int a; cin >> a;
            max_ending += a;
            max_sofar = max(max_sofar, max_ending);
            if (max_ending < 0) max_ending = 0;
        }
        if (max_sofar < 0) cout << "Losing streak" << ". \n";
        else cout << "The maximum winning streak is " << max_sofar << ". \n";
                
        cin >> n;
    }

    return 0;
}