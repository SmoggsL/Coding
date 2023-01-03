#include <bits/stdc++.h>
using namespace std;
int n,t,l,r,a;
int main() {
    freopen("DP_A4.INP","r",stdin);
    freopen("DP_A4.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    vector<int> b(n+1);
    for (int i = 1; i <= n; i++) 
    {
        cin >> a;
        if (i == 1)
        {
            b[i] = a;
        }
        b[i] = b[i-1] + a;
    }

    cin >> t;
    while(t--)
    {
        cin >> l >> r;
        cout << b[r] - b[l-1] << "\n";
    }
    return 0;
}